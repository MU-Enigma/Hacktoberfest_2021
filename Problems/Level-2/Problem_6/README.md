# Problem 6

Given an array A of size N, which contains numbers ranging from 0 to 100000. Write a program that prints odd and even numbers alternatively in a sorted manner(ascending order, odd first and even next), given that N is always even and the number of even numbers and odd numbers in the array is also the same(i.e., N/2)

```md
Example 1: N = 10, A = 1 4 2 3 6 8 10 5 9 7
Output: 1 2 3 4 5 6 7 8 9 10 

Here, We are printing the odd and even numbers alternatively, ensuring that all even numbers and odd numbers are sorted in ascending order.

Example 2: N = 8, A = 100 5 20 86 7 9 22 55 88 97
Output: 5 20 7 22 9 86 55 88 97 100 

Here, We are printing the odd and even numbers alternatively, ensuring that all even numbers and odd numbers are sorted in ascending order.
```

## Input Format

```md
First Line tells T, i.e., number of test cases.Then, 
The first line of each test case will have N i.e., size of the array, second line of the test case has all the array elements sepeated by a space in between them.
```

## Output Format

```md
The output should print the required array elements with a space between each element.
```

### Sample Input

```c
4
10
1 4 2 3 6 8 10 5 9 7
8
5 20 86 7 9 22 55 88
6
2 4 10 1 5 7
14
2 3 9 4 11 14 15 18 111 190 10000 11111 1 6
```

### Sample Output

```c
1 2 3 4 5 6 7 8 9 10 
5 20 7 22 9 86 55 88 
1 2 5 4 7 10 
1 2 3 4 9 6 11 14 15 18 111 190 11111 10000 
```
