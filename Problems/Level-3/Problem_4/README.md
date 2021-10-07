# Problem 4

Given is a series of problems on __COUNTERFEIT  COIN RIDDLE__

-------------------------------------------------------------------------------------------------------------

>Assume you are given an array. Each element in the array corresponds to the weight of a coin
    in the treasure. All the coins have the same weight except one (the counterfeit coin). The
    counterfeit coin is lighter than the other coins. Your aim is to determine the position of the
    counterfeit coin in the array and how much lighter it is as compared to the other coins. For
    comparing weights, you can only use the given balance scale. You can put any number of coins
    on two sides of the scale. The balance scale can be implemented as a function which takes two
    arguments, 1) coins on the left side and 2) coins on the right side, and returns which side of the
    balance is lighter. If required, you can have more arguments in this function.

>The command line arguments will be used to define the weights of the coins. The first argument
    is the number of coins in the treasure. Let the number of coins be k. The next k inputs
    correspond to the weight of the coins. Ensure proper sanity checks for correct input.
    Print “Wrong Input” for invalid input.

>In this question, you will implement several algorithms to solve this riddle. At every step, your
    algorithm should output the weights placed on both the sides of the scale. The elements should
    be processed in the array order. The last line of the output should be the index of the counterfeit
    coin and the weight difference. Sample inputs and outputs have been shown for a few test
    cases.

## Algorithm 2 - __Divide and Conquer Strategy 1__
    At every step, divide the treasure in 2 halves. Keep the first half on the left side of the scale and second half on the right side. In case one coin is left out (when the number of coins is odd), keep it separately. If both the sides are equal, then the coin left outside is the counterfeit coin. Else collect the coins on the lighter side and repeat this whole process again.

### Sample Input 1
    7 5 5 5 5 2 5 5
### Sample Output 1
    15 12
    5 2
    4 3

### Sample Input 2
    5 5 5 5 5 2
### Sample Output 2
    10 10
    4 3