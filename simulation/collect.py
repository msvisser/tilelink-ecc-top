import os
import re
from dataclasses import dataclass
from collections import defaultdict
import matplotlib.pyplot as plt
import numpy as np

plt.rcParams.update({
  "text.usetex": True,
#   "font.family": "Helvetica"
})

correct_output = """seedcrc          : 0xe9f5
[0]crclist       : 0xe714
[0]crcmatrix     : 0x1fd7
[0]crcstate      : 0x8e3a
[0]crcfinal      : 0xfcaf
Correct operation validated. See README.md for run and reporting rules.
"""

def avg(values):
    if len(values) == 0:
        return None
    return np.mean(values)

def reject_outliers(data, m = 2.):
    d = np.abs(data - np.median(data))
    mdev = np.median(d)
    s = d/mdev if mdev else 0.
    return data[s<m]


@dataclass
class Results:
    seed: int
    correct: bool
    terminated: bool
    cycles: int
    exit_code: int
    exception_code: int
    total_error_seen: int
    total_clean_reads: int
    total_correctable_reads: int
    total_uncorrectable_reads: int
    total_undetectable_reads: int


def collect(controller, code):
    dir_path = f"designs/{controller}-{code}/log"
    all_logs = os.listdir(dir_path)
    prefixes = sorted(map(
        lambda x: x.removesuffix("-out.txt").rsplit("-", maxsplit=2),
        filter(lambda x: x.endswith("-out.txt"), all_logs)
    ))

    result_map = defaultdict(list)
    for l, d, s in prefixes:
        with open(f"{dir_path}/{l}-{d}-{s}-out.txt", "rb") as out, open(f"{dir_path}/{l}-{d}-{s}-err.txt") as err:
            try:
                out_data = out.read().decode("utf-8")
            except UnicodeDecodeError:
                out_data = ""
            err_data = err.read()

            if len(err_data) == 0:
                print(f"skipping {l} {d} {s}")
                continue

            correct = out_data.endswith(correct_output)
            terminated = "Maximum number of clock cycles reached" in err_data

            # total_ticks = re.search(r"Total ticks      : (\d+)", out_data)
            sim_stop = re.search(r"Stopping simulator after (\d+) cycles with code (\d+) \((\d+)\)", err_data)
            if sim_stop is not None:
                total_ticks = int(sim_stop.group(1))
                exit_code = int(sim_stop.group(2))
                exception_code = int(sim_stop.group(3))
            else:
                total_ticks = None
                exit_code = None
                exception_code = None

            total_error_seen = int(re.search(r"total errors seen: (\d+)", err_data).group(1))
            total_clean_reads = int(re.search(r"total clean reads: (\d+)", err_data).group(1))
            total_correctable_reads = int(re.search(r"total correctable reads: (\d+)", err_data).group(1))
            total_uncorrectable_reads = int(re.search(r"total uncorrectable reads: (\d+)", err_data).group(1))
            total_undetectable_reads = int(re.search(r"total undetectable reads: (\d+)", err_data).group(1))

            result_map[(int(d), int(l))].append(Results(
                seed=int(s),
                correct=correct,
                terminated=terminated,
                cycles=total_ticks,
                exit_code=exit_code,
                exception_code=exception_code,
                total_error_seen=total_error_seen,
                total_clean_reads=total_clean_reads,
                total_correctable_reads=total_correctable_reads,
                total_uncorrectable_reads=total_uncorrectable_reads,
                total_undetectable_reads=total_undetectable_reads,
            ))

    return result_map


def main():
    controllers = ["BasicController", "WriteBackController", "RefreshController", "ForceRefreshController", "TopRefreshController", "TopBottomRefreshController", "ContinuousRefreshController"]
    controllers_normal = ["BasicController", "WriteBackController", "RefreshController"]
    controllers_refresh = ["RefreshController", "ForceRefreshController", "TopRefreshController", "TopBottomRefreshController", "ContinuousRefreshController"]
    codes = ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]

    plt.rc('axes', titlesize=10)
    fig_stack_a, ax_stack_a = plt.subplots(nrows=4, ncols=3, figsize=[8.0, 11.0], sharey=True)
    fig_stack_a.suptitle("Double error rate = 0\\%")
    fig_stack_b, ax_stack_b = plt.subplots(nrows=4, ncols=3, figsize=[8.0, 11.0], sharey=True)
    fig_stack_b.suptitle("Double error rate = 0\\%")
    fig_stack_10_a, ax_stack_10_a = plt.subplots(nrows=4, ncols=3, figsize=[8.0, 11.0], sharey=True)
    fig_stack_10_a.suptitle("Double error rate = 10\\%")
    fig_stack_10_b, ax_stack_10_b = plt.subplots(nrows=4, ncols=3, figsize=[8.0, 11.0], sharey=True)
    fig_stack_10_b.suptitle("Double error rate = 10\\%")

    fig_stack_refresh_a, ax_stack_refresh_a = plt.subplots(nrows=4, ncols=5, figsize=[12.0, 10.0], sharey=True)
    fig_stack_refresh_a.suptitle("Double error rate = 0\\%")
    fig_stack_refresh_b, ax_stack_refresh_b = plt.subplots(nrows=4, ncols=5, figsize=[12.0, 10.0], sharey=True)
    fig_stack_refresh_b.suptitle("Double error rate = 0\\%")
    fig_stack_refresh_10_a, ax_stack_refresh_10_a = plt.subplots(nrows=4, ncols=5, figsize=[12.0, 10.0], sharey=True)
    fig_stack_refresh_10_a.suptitle("Double error rate = 10\\%")
    fig_stack_refresh_10_b, ax_stack_refresh_10_b = plt.subplots(nrows=4, ncols=5, figsize=[12.0, 10.0], sharey=True)
    fig_stack_refresh_10_b.suptitle("Double error rate = 10\\%")

    result = collect("BasicController", "IdentityCode")
    base_cycles = result[(0, 0)][0].cycles

    fig_cycles, ax_cycles = plt.subplots(nrows=1, ncols=3, figsize=[8.0, 4.0], sharey=True)
    fig_cycles_refresh, ax_cycles_refresh = plt.subplots(nrows=1, ncols=5, figsize=[12.0, 4.0])

    for controller_i, controller in enumerate(controllers):
        for code_i, code in enumerate(codes):
            result = collect(controller, code)

            # if controller in controllers_normal:
            print(f"{controller}-{code}:")

            plot_d0_x = []
            plot_d10_x = []
            plot_d0_stack = [[], [], [], [], []]
            plot_d10_stack = [[], [], [], [], []]
            plot_d0_cycles = []
            for key in sorted(result.keys()):
                d, l = key

                correct_results = list(filter(lambda x: x.correct, result[key]))

                total = len(result[key])
                correct = len(list(filter(lambda x: x.correct and x.exit_code == 0 and x.total_undetectable_reads == 0, result[key])))
                cheated = len(list(filter(lambda x: x.correct and x.exit_code == 0 and x.total_undetectable_reads != 0, result[key])))
                incorrect = len(list(filter(lambda x: not x.correct and x.exit_code == 0, result[key])))
                aborted = len(list(filter(lambda x: x.exit_code == 1 and x.exception_code == 5, result[key])))
                terminated = len(list(filter(lambda x: x.terminated or (x.exit_code == 1 and x.exception_code != 5), result[key])))
                assert correct + cheated + incorrect + aborted + terminated == total, f"{correct}, {cheated}, {incorrect}, {aborted}, {terminated}"

                cycles = list(map(lambda x: x.cycles - base_cycles, correct_results))
                clean_reads = list(map(lambda x: x.total_clean_reads, correct_results))
                correctable_reads = list(map(lambda x: x.total_correctable_reads, correct_results))
                uncorrectable_reads = list(map(lambda x: x.total_uncorrectable_reads, correct_results))
                undetectable_reads = list(map(lambda x: x.total_undetectable_reads, correct_results))

                if controller in controllers_normal:
                    print(f"{l:4d} {d:2d}: {correct:3d} {cheated:3d} {incorrect:3d} {aborted:3d} {terminated:3d}/{total:3d} {np.average(clean_reads):.2f} {np.average(correctable_reads):.2f} {np.average(uncorrectable_reads):.2f} {np.average(undetectable_reads):.2f}")

                if d == 0:
                    # print(f"{avg(cycles)} ", end='')

                    v = np.median(cycles)
                    plot_d0_cycles.append(v)

                    plot_d0_x.append(l)
                    plot_d0_stack[0].append(100 * correct / total)
                    plot_d0_stack[1].append(100 * cheated / total)
                    plot_d0_stack[2].append(100 * aborted / total)
                    plot_d0_stack[3].append(100 * incorrect / total)
                    plot_d0_stack[4].append(100 * terminated / total)
                else:
                    plot_d10_x.append(l)
                    plot_d10_stack[0].append(100 * correct / total)
                    plot_d10_stack[1].append(100 * cheated / total)
                    plot_d10_stack[2].append(100 * aborted / total)
                    plot_d10_stack[3].append(100 * incorrect / total)
                    plot_d10_stack[4].append(100 * terminated / total)

            colors = ["tab:green", "tab:purple", "tab:blue", "tab:orange", "tab:red"]

            if controller in controllers_normal:
                ci = controllers_normal.index(controller)
                if code_i < 4:
                    ax = ax_stack_a[code_i, ci]
                    ax_10 = ax_stack_10_a[code_i, ci]
                else:
                    ax = ax_stack_b[code_i - 4, ci]
                    ax_10 = ax_stack_10_b[code_i - 4, ci]

                ax.stackplot(plot_d0_x, plot_d0_stack, colors=colors)
                ax.set_title(f"{controller}")
                ax.set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax.set_ylabel(f"{code}\nSimulations (\\%)")
                ax.set_xbound(0, 150)
                ax.set_ybound(0, 100)
                ax.grid(True, linewidth=0.5)

                ax_10.stackplot(plot_d10_x, plot_d10_stack, colors=colors)
                ax_10.set_title(f"{controller}")
                ax_10.set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_10.set_ylabel(f"{code}\nSimulations (\\%)")
                ax_10.set_xbound(0, 150)
                ax_10.set_ybound(0, 100)
                ax_10.grid(True, linewidth=0.5)

            if controller in controllers_refresh:
                ci = controllers_refresh.index(controller)
                if code_i < 4:
                    ax = ax_stack_refresh_a[code_i, ci]
                    ax_10 = ax_stack_refresh_10_a[code_i, ci]
                else:
                    ax = ax_stack_refresh_b[code_i - 4, ci]
                    ax_10 = ax_stack_refresh_10_b[code_i - 4, ci]

                ax.stackplot(plot_d0_x, plot_d0_stack, colors=colors)
                ax.set_title(f"{controller}")
                ax.set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax.set_ylabel(f"{code}\nSimulations (\\%)")
                ax.set_xbound(0, 150)
                ax.set_ybound(0, 100)
                ax.grid(True, linewidth=0.5)
                ax_10.stackplot(plot_d10_x, plot_d10_stack, colors=colors)
                ax_10.set_title(f"{controller}")
                ax_10.set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_10.set_ylabel(f"{code}\nSimulations (\\%)")
                ax_10.set_xbound(0, 150)
                ax_10.set_ybound(0, 100)
                ax_10.grid(True, linewidth=0.5)

            if code_i != 0:
                if controller in controllers_normal:
                    ci = controllers_normal.index(controller)
                    ax_cycles[ci].plot(plot_d0_x, plot_d0_cycles)
                    ax_cycles[ci].grid(True)
                    ax_cycles[ci].set_title(f"{controller}")
                    ax_cycles[ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                    if ci == 0:
                        ax_cycles[ci].set_ylabel("Additional cycles")
                    ax_cycles[ci].set_xbound(0, 150)
                    ax_cycles[ci].set_ybound(-5, 105)
                if controller in controllers_refresh:
                    ci = controllers_refresh.index(controller)
                    ax_cycles_refresh[ci].plot(plot_d0_x, plot_d0_cycles)
                    ax_cycles_refresh[ci].grid(True)
                    ax_cycles_refresh[ci].set_title(f"{controller}")
                    ax_cycles_refresh[ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                    if ci == 0:
                        ax_cycles_refresh[ci].set_ylabel("Additional cycles")
                    ax_cycles_refresh[ci].set_xbound(0, 150)
                    if ci != 1: # Skip ForceRefreshController
                        ax_cycles_refresh[ci].set_ybound(-5, 105)

            if controller in controllers_normal:
                print()

    legend_labels = ["Correct", "Cheated", "Aborted", "Incorrect", "Terminated"]

    fig_stack_a.legend(legend_labels, ncol=2)
    fig_stack_a.tight_layout(rect=(0,0,1,0.97))
    fig_stack_a.savefig(f"stack-a.pdf")
    fig_stack_b.legend(legend_labels, ncol=2)
    fig_stack_b.tight_layout(rect=(0,0,1,0.97))
    fig_stack_b.savefig(f"stack-b.pdf")
    fig_stack_10_a.legend(legend_labels, ncol=2)
    fig_stack_10_a.tight_layout(rect=(0,0,1,0.97))
    fig_stack_10_a.savefig(f"stack-10-a.pdf")
    fig_stack_10_b.legend(legend_labels, ncol=2)
    fig_stack_10_b.tight_layout(rect=(0,0,1,0.97))
    fig_stack_10_b.savefig(f"stack-10-b.pdf")

    fig_stack_refresh_a.legend(legend_labels, ncol=4)
    fig_stack_refresh_a.tight_layout(rect=(0,0,1,0.97))
    fig_stack_refresh_a.savefig("stack-refresh-a.pdf")
    fig_stack_refresh_b.legend(legend_labels, ncol=4)
    fig_stack_refresh_b.tight_layout(rect=(0,0,1,0.97))
    fig_stack_refresh_b.savefig("stack-refresh-b.pdf")
    fig_stack_refresh_10_a.legend(legend_labels, ncol=4)
    fig_stack_refresh_10_a.tight_layout(rect=(0,0,1,0.97))
    fig_stack_refresh_10_a.savefig("stack-refresh-10-a.pdf")
    fig_stack_refresh_10_b.legend(legend_labels, ncol=4)
    fig_stack_refresh_10_b.tight_layout(rect=(0,0,1,0.97))
    fig_stack_refresh_10_b.savefig("stack-refresh-10-b.pdf")

    fig_cycles.legend(codes[1:], loc="lower right", ncol=4)
    fig_cycles.tight_layout(rect=(0,0.1,1,1))
    fig_cycles.savefig("cycles.pdf")
    fig_cycles_refresh.legend(codes[1:], loc="lower right", ncol=7)
    fig_cycles_refresh.tight_layout(rect=(0,0.08,1,1))
    fig_cycles_refresh.savefig("cycles_refresh.pdf")


if __name__ == "__main__":
    main()
