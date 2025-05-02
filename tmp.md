# Problem

## input

- integer array `coins` representing coins of different denominations
- integer `amount` representing a total amount of money.

## output

- fewest number of coins to make up that amount.
- If that amount of money cannot be made up by any combination of the coins, return -1.

## notes

You may assume that you have an infinite number of each kind of coin.

---

# Examples

## Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
0 1 2 3 4 5 6 7 8 9 10 11
0 1 1 2 2 1 2 2 3 3 2 3

f(i) = f(i -1) + f(i - 2) + f(i - 5)

## Example 2:

Input: coins = [2], amount = 3
Output: -1

## Example 3:

Input: coins = [1], amount = 0
Output: 0

---

# Solution

- f(i) the fewest number of coins to make i

## base cases

f(0) = 0
