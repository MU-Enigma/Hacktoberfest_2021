# Problem 6

-------------------------------------------------------------------------------------------------------------

>Assume that you are given the variation in the price of a bungalow as an array
    where the i'th element of the array denotes the price of the bungalow (in crores) on the i'th day. As a real estate agent, you are interested in buying and selling this bungalow in order to earn a profit from this transaction (buy and sell).

1. You can do at most one transaction.
2. You cannot sell the bungalow before buying it.
3. If you buy the bungalow, it is mandatory to sell it.
4. As you intend to earn a profit, you will not buy the bungalow if you can’t sell it for a higher price.

## Input Format

    [number of days] [Price of the bungalow at a given day (separated by spaces)]

### Output Format

    [Buying_price] [Selling_price] [Profit_earned]

### Sample Input 1

    5 4 12 20 21 40

### Sample Output 1

    4 40 36

### Sample Input 2

    5 40 39 38 21 19

### Sample Output 2

    0 0 0
    (no transaction is done in this case)

### Sample Input 3

    5 40 -39 38 21 19

### Sample Output

    error
    (price can't be negative)
