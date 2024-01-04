# The Last of Us

**Time Limit: 1 Sec**  
**Memory Limit: 264 MB**

Earth has faced zombie apocalypse. Not many people are alive, but still, they are surviving. Ellie and Joel are one of the survivors. They are walking for so many miles to find survivors like them. On the way, Ellie has found many numbers on the walls of many buildings. To keep Ellie focused, Joel has asked her to calculate the sum of even and odd numbers. He also asked her to divide the maximum sum by the minimum sum.

## Input

First line contains N, number of elements Ellie found

Second line contains all the numbers a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ……., a<sub>n</sub>

- 1 <= N <= 10^5
- -10^9 <= a<sub>i</sub> <= 10^9

## Output

Print only the single number according to the statement.

## Example

Sample Input 1

```
5
1 2 3 4 5
```

Sample Output 1

```
1
```

Sample Input 2

```
5
100 200 300 3 3
```

Sample Output 2

```
100
```

## Note

Do not use float/double

Setter's note on edge cases, as written in the original file:

```
// edge case 3 all even or all odd + 3 → 1 1 -2 runtime error 3 → 0 0 0
```
