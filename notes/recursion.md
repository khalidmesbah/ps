# Recursion

Recursion is a powerful technique in programming. It's the ability of a function to call itself. This might seem like a recipe
for infinite loops, but it's actually a very elegant way to solve certain problems.

Think of a set of Russian nesting dolls. Each doll contains a smaller version of itself. Recursion is like that. A recursive f
unction breaks down a problem into smaller, similar subproblems, and then calls itself to solve those subproblems.

The key to recursion is the base case. This is the condition that stops the recursion from going on forever. Without a base ca
se, a recursive function would call itself endlessly, like a set of nesting dolls that never ends.

A classic example of recursion is the factorial function. The factorial of a number is the product of all the positive integer
s less than or equal to that number. For example, the factorial of 5 is 5 _ 4 _ 3 _ 2 _ 1, which is 120.

Here's how you could write a recursive function to calculate the factorial of a number:

```python
def factorial(n):
  if n == 0:
    return 1
  else:
    return n * factorial(n - 1)
```

The base case is when n is equal to 0. In this case, the function returns 1. Otherwise, the function returns n multiplied by t
he factorial of n - 1.

Recursion can be a bit tricky to grasp at first, but it's a very powerful tool. Once you understand it, you'll find it can be
used to solve a wide range of problems.

## Notes

- if we have n recursive calls, then the variables in each call remain in memory
- recursion happens in the stack
