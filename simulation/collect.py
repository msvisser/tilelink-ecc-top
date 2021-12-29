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
    dir_path = f"{controller}-{code}/log"
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
    controllers = ["BasicController", "WriteBackController", "RefreshController", "ForceRefreshController", "TopRefreshController", "TopBottomRefreshController", "InsaneRefreshController"]
    controllers_normal = ["BasicController", "WriteBackController", "RefreshController"]
    controllers_refresh = ["RefreshController", "ForceRefreshController", "TopRefreshController", "TopBottomRefreshController", "InsaneRefreshController"]
    codes = ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]

    plt.rc('axes', titlesize=10)
    fig_stack2, ax_stack2 = plt.subplots(nrows=8, ncols=3, figsize=[10.0, 20.0], sharey=True)
    fig_stack2.suptitle("Double error rate = 0\\%")
    fig_stack2_10, ax_stack2_10 = plt.subplots(nrows=8, ncols=3, figsize=[10.0, 20.0], sharey=True)
    fig_stack2_10.suptitle("Double error rate = 10\\%")

    fig_stack_refresh, ax_stack_refresh = plt.subplots(nrows=8, ncols=5, figsize=[12.0, 20.0], sharey=True)
    fig_stack_refresh.suptitle("Double error rate = 0\\%")
    fig_stack_refresh_10, ax_stack_refresh_10 = plt.subplots(nrows=8, ncols=5, figsize=[12.0, 20.0], sharey=True)
    fig_stack_refresh_10.suptitle("Double error rate = 10\\%")

    result = collect("BasicController", "IdentityCode")
    base_cycles = result[(0, 0)][0].cycles

    keys = " & ".join(map(str, sorted(map(lambda x: x[1], filter(lambda x: x[0] == 0, result.keys())))))

    table_file = open("table.tex", "w")
    table_file.write(r"""\newcommand\Tstrut{\rule{0pt}{2.6ex}}       % "top" strut
\newcommand\Bstrut{\rule[-0.9ex]{0pt}{0pt}} % "bottom" strut
\newcommand\TBstrut{\Tstrut\Bstrut}
\newcommand\Xstrut{\rule{0pt}{3ex}}
\begin{table}[h]
\scriptsize
\setlength{\tabcolsep}{0.35em}
\begin{tabular}{|l|r|r|r|r|r|r|r|r|r|r|r|r|r|r|r|r|r|r|}
\hline \TBstrut
""")
    table_file.write(f" & {keys} \\\\ \\hline \n")

    fig_cycles, ax_cycles = plt.subplots(nrows=2, ncols=4, figsize=[12.0, 6.0])
    ax_cycles = ax_cycles.reshape((8,))
    fig_cycles.suptitle("Cycles")

    for controller_i, controller in enumerate(controllers):
        # table_file.write(f"\multicolumn{{19}}{{l}}{{\\Xstrut {controller[:-10]}}} \\\\ \\hline \\Tstrut\n")
        table_file.write(f"\multicolumn{{19}}{{l}}{{\\Xstrut {controller[:-10]}}} \\\\ \\hline\n")

        for code_i, code in enumerate(codes):
            result = collect(controller, code)
            local_base_cycles = result[(0, 0)][0].cycles - base_cycles

            print(f"{controller}-{code}:")
            table_file.write(f"{code[:-4]}")

            plot_d0_x = []
            plot_d10_x = []
            plot_d0_stack = [[], [], [], []]
            plot_d10_stack = [[], [], [], []]
            plot_d0_cycles = []
            for key in sorted(result.keys()):
                d, l = key

                correct_results = list(filter(lambda x: x.correct, result[key]))

                total = len(result[key])
                correct = len(list(filter(lambda x: x.correct and x.exit_code == 0, result[key])))
                incorrect = len(list(filter(lambda x: not x.correct and x.exit_code == 0, result[key])))
                aborted = len(list(filter(lambda x: x.exit_code == 1 and x.exception_code == 5, result[key])))
                terminated = len(list(filter(lambda x: x.terminated or (x.exit_code == 1 and x.exception_code != 5), result[key])))
                assert correct + incorrect + aborted + terminated == total, f"{correct}, {incorrect}, {aborted}, {terminated}"

                cycles = list(map(lambda x: x.cycles - base_cycles, correct_results))
                clean_reads = list(map(lambda x: x.total_clean_reads, correct_results))
                correctable_reads = list(map(lambda x: x.total_correctable_reads, correct_results))
                uncorrectable_reads = list(map(lambda x: x.total_uncorrectable_reads, correct_results))
                undetectable_reads = list(map(lambda x: x.total_undetectable_reads, correct_results))

                print(f"{l:4d} {d:2d}: {correct:2d} {incorrect:2d} {aborted:2d} {terminated:2d}/{total:2d} {np.average(clean_reads):.2f} {np.average(correctable_reads):.2f} {np.average(uncorrectable_reads):.2f} {np.average(undetectable_reads):.2f}")

                if d == 0:
                    # print(f"{avg(cycles)} ", end='')

                    v = avg(reject_outliers(np.array(cycles)))
                    if v is None:
                        table_file.write(" & -")
                    elif l != 0:
                        table_file.write(f" & {v - local_base_cycles:.2f}")
                    else:
                        table_file.write(f" & {v:.2f}")
                    plot_d0_cycles.append(v)

                    plot_d0_x.append(l)
                    plot_d0_stack[0].append(100 * correct / total)
                    plot_d0_stack[1].append(100 * aborted / total)
                    plot_d0_stack[2].append(100 * incorrect / total)
                    plot_d0_stack[3].append(100 * terminated / total)
                else:
                    plot_d10_x.append(l)
                    plot_d10_stack[0].append(100 * correct / total)
                    plot_d10_stack[1].append(100 * aborted / total)
                    plot_d10_stack[2].append(100 * incorrect / total)
                    plot_d10_stack[3].append(100 * terminated / total)

            if controller in controllers_normal:
                ci = controllers_normal.index(controller)
                ax_stack2[code_i, ci].stackplot(plot_d0_x, plot_d0_stack, colors=["tab:green", "tab:blue", "tab:orange", "tab:red"])
                ax_stack2[code_i, ci].set_title(f"{controller}")
                ax_stack2[code_i, ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_stack2[code_i, ci].set_ylabel(f"{code}\nSimulations (\\%)")
                ax_stack2[code_i, ci].set_xbound(0, 150)
                ax_stack2[code_i, ci].set_ybound(0, 100)
                ax_stack2_10[code_i, ci].stackplot(plot_d10_x, plot_d10_stack, colors=["tab:green", "tab:blue", "tab:orange", "tab:red"])
                ax_stack2_10[code_i, ci].set_title(f"{controller}")
                ax_stack2_10[code_i, ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_stack2_10[code_i, ci].set_ylabel(f"{code}\nSimulations (\\%)")
                ax_stack2_10[code_i, ci].set_xbound(0, 150)
                ax_stack2_10[code_i, ci].set_ybound(0, 100)

            if controller in controllers_refresh:
                ci = controllers_refresh.index(controller)
                ax_stack_refresh[code_i, ci].stackplot(plot_d0_x, plot_d0_stack, colors=["tab:green", "tab:blue", "tab:orange", "tab:red"])
                ax_stack_refresh[code_i, ci].set_title(f"{controller}")
                ax_stack_refresh[code_i, ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_stack_refresh[code_i, ci].set_ylabel(f"{code}\nSimulations (\\%)")
                ax_stack_refresh[code_i, ci].set_xbound(0, 150)
                ax_stack_refresh[code_i, ci].set_ybound(0, 100)
                ax_stack_refresh_10[code_i, ci].stackplot(plot_d10_x, plot_d10_stack, colors=["tab:green", "tab:blue", "tab:orange", "tab:red"])
                ax_stack_refresh_10[code_i, ci].set_title(f"{controller}")
                ax_stack_refresh_10[code_i, ci].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if ci == 0:
                    ax_stack_refresh_10[code_i, ci].set_ylabel(f"{code}\nSimulations (\\%)")
                ax_stack_refresh_10[code_i, ci].set_xbound(0, 150)
                ax_stack_refresh_10[code_i, ci].set_ybound(0, 100)

            if code_i != 0:
                ax_cycles[controller_i].plot(plot_d0_x, plot_d0_cycles)
                ax_cycles[controller_i].grid(True)
                ax_cycles[controller_i].set_title(f"{controller}")
                ax_cycles[controller_i].set_xlabel("Errors per clockcycle ($\\times 10^{-6}$)")
                if controller_i % 4 == 0:
                    ax_cycles[controller_i].set_ylabel("Additional cycles")
                ax_cycles[controller_i].set_xbound(0, 150)
                # ax_cycles[controller_i].set_ybound(-5, 105)

            print()
            # if code_i == len(codes) - 1:
            #     table_file.write("\\Bstrut ")
            table_file.write("\\TBstrut \\\\ \\hline\n")

        table_file.write("\\hline\n")

    fig_stack2.legend(["Correct", "Aborted", "Incorrect", "Terminated"], ncol=4)
    fig_stack2.subplots_adjust(left=0.07, right=0.93, bottom=0.03, top=0.95, hspace=0.5, wspace=0.1)
    fig_stack2.savefig(f"stack2.pdf")
    fig_stack2_10.legend(["Correct", "Aborted", "Incorrect", "Terminated"], ncol=4)
    fig_stack2_10.subplots_adjust(left=0.07, right=0.93, bottom=0.03, top=0.95, hspace=0.5, wspace=0.1)
    fig_stack2_10.savefig(f"stack2-10.pdf")

    fig_stack_refresh.legend(["Correct", "Aborted", "Incorrect", "Terminated"], ncol=4)
    fig_stack_refresh.subplots_adjust(left=0.07, right=0.93, bottom=0.03, top=0.95, hspace=0.5, wspace=0.1)
    fig_stack_refresh.savefig("stack-refresh.pdf")
    fig_stack_refresh_10.legend(["Correct", "Aborted", "Incorrect", "Terminated"], ncol=4)
    fig_stack_refresh_10.subplots_adjust(left=0.07, right=0.93, bottom=0.03, top=0.95, hspace=0.5, wspace=0.1)
    fig_stack_refresh_10.savefig("stack-refresh-10.pdf")

    ax_cycles[7].set_visible(False)
    fig_cycles.legend(codes[1:], loc="lower right")
    fig_cycles.subplots_adjust(left=0.07, right=0.93, hspace=0.4, wspace=0.2)
    fig_cycles.savefig("cycles.pdf")

    table_file.write("\\end{tabular}\n\\end{table}\n")

if __name__ == "__main__":
    main()
