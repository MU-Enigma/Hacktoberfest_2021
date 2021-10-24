# Problem 5

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

## Algorithm 3 - __Divide and Conquer Strategy 2__

    At every step, divide the treasure in 3 parts. Assuming the number of coins to be k, the first and second part, each contains floor(k/3) coins. Remaining coins go to the third part. Keep the first part on the left side of the scale, second part on the right side and remaining coins outside. If the scale is balanced, follow the same process for the third part, else target the lighter side.
    Note: If k=2 at any step, simply compare.

### Sample Input 1

    15 5 5 5 5 5 5 5 5 5 5 5 5 2 5 5

### Sample Output 1

    25 25
    5 5
    2 5
    12 3

### Sample Input 2

    10 5 5 5 5 5 5 5 5 5 2

### Sample Output 2

    15 15
    5 5
    5 2
    9 3
