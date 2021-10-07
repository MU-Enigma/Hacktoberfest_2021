# Problem 10

X and Y are best friends and both stay together in the same room. They usually challenge themselves each other to wake up early in the morning. One day X gave Y the following problem.

Let A(1), A92, ... A(N) be  an array of N numbers. Weakness of this array is defined by max( A(1) - A(2) , A(2) - (3), ... A(n-1) - A(n)). Y needs to find a permutation of given array such that the resulting weakness is minimum possible.

Since Y is busy doing projects, he asked you to find the solution

Input:

First line, it contains a single integer N (The number of elements in the array)

Second line, it has N spaces separated by integers A(i).

Output:

Print a permutation of the array such that weakness is minimised

Test Case:

Input:

```c
3
3 3 3
```

output:

```c
3 3 3
```

Input:

```c
3
1 3 2
```

Output:

```c
1 2 3
```
