# Level 2

## Problem 6

Ones birthday is a special day but everyone is scared as the day gets closer. This is mostly because of birthday bombs also known as GPL. Keeping with the traditions of MU.

Enigma has got access to a special super computer which generated random numbers but little did they know that the numbers it generated are psuedo random numbers.
Later on figuring this out. Engima decided to make use of it to decide how many birthday bombs each person gets.

Whenever someone has a birthday, the psuedo random number is used to generate N numbers. Let's assume it is birthday of person "X" and he is going to turn Y years this year. If the array contains Y contiguous numbers in decending order(Starting from Y to 1) M times. The number of birthday bombs he is going to get is M.



Input:

the first line contains number psuedo random numbers generated and the age of the person. (N Y)
The second line contains N positive numbers (a1, a2, .... aN)

Output:

M - Number of birthday bombs the person gets



Test cases:
```
Input:
15 3
9 3 2 1 8 2 1 3 2 1 6 7 3 2 1
```
```
Output: 
3
```


```
Input:
12 9
2 3 9 8 7 6 5 4 3 2 1 4
```
```
output:
1
```

author: vivekdhir77