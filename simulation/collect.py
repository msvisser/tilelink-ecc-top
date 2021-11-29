import os
import re
from dataclasses import dataclass
from collections import defaultdict

correct_output = """seedcrc          : 0xe9f5
[0]crclist       : 0xe714
[0]crcmatrix     : 0x1fd7
[0]crcstate      : 0x8e3a
[0]crcfinal      : 0xfcaf
Correct operation validated. See README.md for run and reporting rules.
"""

@dataclass
class Results:
    seed: int
    correct: bool
    terminated: bool
    cycles: int
    total_error_seen: int
    total_correctable_reads: int
    total_uncorrectable_reads: int

def collect(controller, code):
    dir_path = f"{controller}-{code}/log"
    all_logs = os.listdir(dir_path)
    prefixes = sorted(map(
        lambda x: x.removesuffix("-out.txt").rsplit("-", maxsplit=1),
        filter(lambda x: x.endswith("-out.txt"), all_logs)
    ))

    result_map = defaultdict(list)
    for l, s in prefixes:
        with open(f"{dir_path}/{l}-{s}-out.txt") as out, open(f"{dir_path}/{l}-{s}-err.txt") as err:
            out_data = out.read()
            err_data = err.read()

            correct = out_data.endswith(correct_output)
            terminated = "Maximum number of clock cycles reached" in err_data

            total_ticks = re.search("Total ticks      : (\d+)", out_data)
            if total_ticks is not None:
                total_ticks = int(total_ticks.group(1))

            total_error_seen = int(re.search("total errors seen: (\d+)", err_data).group(1))
            total_correctable_reads = int(re.search("total correctable reads: (\d+)", err_data).group(1))
            total_uncorrectable_reads = int(re.search("total uncorrectable reads: (\d+)", err_data).group(1))

            result_map[float(l)].append(Results(
                seed=int(s),
                correct=correct,
                terminated=terminated,
                cycles=total_ticks,
                total_error_seen=total_error_seen,
                total_correctable_reads=total_correctable_reads,
                total_uncorrectable_reads=total_uncorrectable_reads,
            ))

    return result_map

def main():
    controllers = ["BasicController", "WriteBackController"]
    codes = ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]

    for controller in controllers:
        for code in codes:
            result = collect(controller, code)
            base_cycles = result[0.0][0].cycles

            print(f"{controller}-{code}:")
            for key in sorted(result.keys()):
                total = len(result[key])
                correct = len(list(filter(lambda x: x.correct, result[key])))
                not_terminated = len(list(filter(lambda x: not x.terminated, result[key])))
                cycles = list(map(lambda x: x.cycles - base_cycles if x.cycles is not None else None, result[key]))
                corrected_reads = list(map(lambda x: x.total_correctable_reads, result[key]))

                print(f"{key:.6f}: {correct}/{total} {not_terminated}/{total} {cycles} {corrected_reads}")
            print()


if __name__ == "__main__":
    main()
