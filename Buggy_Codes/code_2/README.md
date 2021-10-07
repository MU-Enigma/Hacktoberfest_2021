# Problem 2
```c
From left to right, the hallway has N+2 tiles numbered 0 to N+1. On tile number x, there is a hole. Standing on tile 0, you hit the ball. When you strike the ball, it bounces of k tiles, which means the tiles it covers are 0,k,2k,..., and so on until it reaches tile N+1.

If the ball does not fall into the hole during the first attempt, you must try again, this time standing on tile N+1. When you hit the ball, it bounces for k length, which means the tiles it covers are (N+1), (N+1-k), (N+1-2k),..., and so on until it passes tile 0.

Determine whether the ball will enter the hole on its forward or backward trip.
```
### Input
```c
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains three integers N,x,k
```
### Output
```c
Print YES if the ball enters the hole either in backward or forward journey else print NO.
```
### Sample Input

```c
3
5 4 2
5 3 2
5 5 2
```

### Sample Output
```c
YES
NO
NO
```