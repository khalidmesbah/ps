const remainder = (firstOperand, secondOperand) => {
  let quotient = Math.floor(firstOperand / secondOperand);
  let remainder = firstOperand - secondOperand * quotient;
  return remainder;
};
console.log(remainder(5, 2), 5 % 2);
console.log(remainder(10, 2), 10 % 2);
/* 
The remainder operator % gives the remainder of the division of two numbers.
The remainder is either 0 or 1
Example
```
5 % 2 = 1 because
Math.floor(5 / 2) = 2 (Quotient)
2 * 2 = 4
5 - 4 = 1 (Remainder)
```
Usage
In mathematics, a number can be checked to be even or odd by checking the remainder of the division of the number by 2.

17 % 2 = 1 (17 is Odd)
48 % 2 = 0 (48 is Even)
Note:
 The remainder operator is sometimes incorrectly referred to as the modulus operator.
 It is very similar to modulus, but does not work properly with negative numbers.

 */
