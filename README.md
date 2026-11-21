# Programming Contest Monday – Problem Set

Problems written by Ratul Hasan for a programming contest at Bangladesh Army University of Engineering & Technology (BAUET). The source folder for the contest is named "Programming Contest Monday".

The Last of Us and A Problem from Multiverse were written in January 2024 as problems 1 and 2 of a shared problem folder, together with their solutions and test lists. The Multiverse statement was then copied, unchanged, into the Monday contest folder next to three new statements written in July 2024. The Last of Us is not in the Monday folder; it is kept here because it was prepared together with Multiverse. It is a different problem from *The Last of Us* in the solo contest set.

Each folder holds one problem: `statement.md` (converted from the original Word file), the solution where one exists, and any tests or figures.

## Problems

| Problem | What it asks | Solution | Topic |
|---|---|---|---|
| [The Last of Us](the-last-of-us) | Sum the even and the odd numbers separately and print the larger sum divided by the smaller, using integer division. | C++ | Implementation |
| [A Problem from Multiverse](a-problem-from-multiverse) | For each binary number of up to 19 digits, print whether its value is prime. | C++ | Number theory, base conversion |
| [Can you print this ?](can-you-print-this) | Print an asterisk pattern for n ≤ 19. The expected output is given only as images. | – | Pattern printing |
| [Welcome to dUCK](welcome-to-duck) | No input: print the full form of "CSE" in lowercase, without special characters. | – | Output only |
| [Khoj The Search](khoj-the-search) | Print the weekday that comes d days (d ≤ 10⁹) after a given weekday. | – | Modular arithmetic |

The last three statements have no solution in the source folder.

## Tests

- `the-last-of-us/tests/edge_cases.txt`: the setter's edge-case notes, two inputs inside a comment block (`1 1 -2 2 0`, and all zeros).
- `a-problem-from-multiverse/tests/`: number lists used to build test input. They have no leading T line, so prepend the count before running them.
  - `primes_below_100000.txt`: all 9,592 primes below 100,000, in decimal.
  - `first_5983_primes_binary.txt`: the first 5,983 primes (2 … 59,167) in binary. The first line, `[Truncated]`, was copied from tool output and is not a number.
  - `composite_binaries.txt`: 16 composite numbers `1010`, `10100`, … with up to 19 binary digits.
  - `mixed_binaries.txt`: 16 numbers, 8 of them prime. The solution prints `NO` ×7, `YES` ×4, `NO`, `YES` ×4.

## Build and run

You need GCC, because the solutions include `<bits/stdc++.h>` and the Multiverse solution uses the `pb_ds` headers. Both files include a local debug header (`deBUG.h`, not tracked) unless `ONLINE_JUDGE` is defined, so compile with `-DONLINE_JUDGE`:

```bash
g++ -std=c++17 -O2 -DONLINE_JUDGE a-problem-from-multiverse/solution.cpp -o multiverse
(echo 16; cat a-problem-from-multiverse/tests/mixed_binaries.txt) | ./multiverse
```

## Known issues

The statements and solutions are kept as they were written:

- A Problem from Multiverse: the Output section asks for `TRUE`/`FALSE`, but the sample and the solution use `YES`/`NO`.
- Khoj The Search: Sample 2 gives `Tuesday` for Friday + 10,000,000 days. Since 10,000,000 mod 7 = 3, the answer should be `Monday`.
- The Last of Us: the statement does not say what to print when one of the sums is 0. The solution prints `0` in that case to avoid dividing by zero.

## Credits

The Word file for **Can you print this ?** lists Ratul Hasan as its creator and **Kawsar Ali** as the last person to save it. All the other Word files list Ratul Hasan.

Ratul Hasan · [ratulhasan.dev](https://ratulhasan.dev)
