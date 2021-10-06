# Problem 1

Students in a school are only allowed to play M minutes during a day of the week.
If the days of the week are numbered from 0 to 6 (From Sunday to Saturday), then find the total amount of minutes M they can play on a given day.
If A is the square of number associated with the weekday, and K is number of vowels in that particular weekday, we know that the value of M is "Fib(A) - Floor(A/K)".

where Fib(A) = Ath number in the fibonacci series.
Floor(A/K) = Greatest Integer <= A/K.

Sample test case 
Input:
Tuesday
Output:
2
