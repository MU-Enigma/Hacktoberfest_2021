# Problems
## Level 2

# Problem 1
No one likes snacks in the mess during the evening.
So the hostlers decided to survive on maggi. But apparently in 3rd floor there are only 2 kettles
so the people in the floor decided to split in 2 parts to boil their maggi packets in the kettle.

The people are lazy to walk extra distance so they maintaing the same order while splitting in 2 parts.

Find the minimum difference between the two parts.


Input

first line- contains an integer N (Number of rooms)
second line- contains a(1), a(2), ... a(n) where a(i) represents number of maggi packets in i'th room.

Output

minimum difference after splitting (print absolute difference)


Test case:
```
Input
7
1 4 6 2 9 5 2
```
```
Output
3
```
Explanation: 
we can divide the array in 2 parts such that difference is minimum in the following way

(1+4+6+2) - (9+5+2) = 3
