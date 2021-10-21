# Problem 3

Given an array of N elements, find the mean of elements of first K elements and subtract it with the mean of Last J elements.
Output the answer.

## Input Format

```md
First Line contains the number N, number of elements in the array.
Second Line contains the Numbers K and J respectively.
Third Line contains the array of N elements.
```

### Sample Input 1

```c
10
4 2
4 5 3 10 34 54 10 4 -6 -60
```

### Sample Output 1

```c
38.5
```

### Explanation

```c
(4+5+3+10) / 4 - [ (-6) +(-60) ]/2
=> 22/4 - (-33)
=> 5.5 + 33 = 38.5
```

### Sample Input 2

```c
5
4 4
1 2 3 4 5
```

### Sample Ouput 2

```c
-1
```

### Explanation

```c
(1+2+3+4)/4 - (2+3+4+5)/4 => 10/4 - 14/4 = -1
```
