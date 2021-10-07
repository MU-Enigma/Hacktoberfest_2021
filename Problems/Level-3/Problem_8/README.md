# Problem 8

There are N students in a standing in a circle. Find the name of each student in the circle if their name is of the following pattern:

1. First letter of each person's name starts with A.
2. Next 5 Letters of their name is the first five vowels in the given string S.
3. Next Letter of each student's name is the next consonant in the string S. (If the first student's name used the first consonant of the string, then the second student will use the second consonant and so on.)
4. Remaining letters of each student's name will have the sum of ASCII values of the first 7 letters of that student's name. (If their name's letters are 'ABCDEFG', then their full name will be 'ABCDEFG476' )

#### NOTE: String S and Names are CASE Sensitive.

## Input Format
```
First line of input contains N, number of students.
Second Line of input contains string S.
```

### Sample Input
```c
5
EIAPOOxLONNNPP
```

### Sample Output
```c
AEIAOOP510
AEIAOOx550
AEIAOOL506
AEIAOON508
AEIAOON508
```