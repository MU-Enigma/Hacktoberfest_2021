# Problem 7
## HacktoberFest 2021

This week's Math assignment is particularly lengthy, and you have a bunch of questions to complete! Let the 
questions be labelled as A,B,C, and so on, with each question taking an hour to solve. If you do questions in
the order: "DDBBCCCBBEZ", then the professor
will see that in the third hour, you began to solve question 'B', then in the fifth hour you got distracted and
began to solve the task 'C', in the eight hour you returned to question 'B', which would make him very 
suspicious. Other examples of when the professor is suspicious: "BAB", "AABBCCDDEEBZZ" and "AAAAZAAAAA".
A person is required to solve the tasks in order as follows: "FFGZZZY" 
 Other : "BA", "AFFFCC" and "YYYYY".

### Input
```
The first line contains an integer t (1≤t≤1000). Then t test cases follow.
The first line of each test case contains one integer n (1≤n≤50) — the number of hours you spent solving questions.
The second line contains a string of length n, consisting of uppercase Latin letters, which is the order 
in which you solved the questions.
```
### Output
```
For each test case output:
```
"YES", if the professor cannot be suspicious.
"NO", otherwise.
You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES 
are all recognized as positive answer).

### Example

#### inputCopy
```
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB
```
#### outputCopy
```
NO
NO
YES
YES
YES
```


