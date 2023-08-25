/*
 * @lc app=leetcode id=415 lang=javascript
 *
 * [415] Add Strings
 */

// @lc code=start
/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function (num1, num2) {
  const length = Math.max(num1.length, num2.length) + 1;
  const res = new Array(length);

  let carry = 0;

  for (let i = 0; i < length; i++) {
    const digit1 = parseInt(num1[num1.length - 1 - i] || 0);
    const digit2 = parseInt(num2[num2.length - 1 - i] || 0);

    let sum = digit1 + digit2 + carry;
    carry = 0;
    if (sum >= 10) (carry = 1), (sum -= 10);

    res[length - 1 - i] = sum;
  }
  if (res[0] === 0) res.shift();
  return res.join("");
};
// @lc code=end

console.log(addStrings("11", "123"));
console.log(addStrings("456", "77"));
console.log(addStrings("1", "9"));
console.log(addStrings("0", "0"));
console.log(addStrings("9333852702227987", "85731737104263"));

/* 
  let [i, j, hasCarry, res] = [num1.length - 1, num2.length - 1, false, 0],
    ans = [];

  while (i >= 0 || j >= 0 || hasCarry) {
    let digit1 = i >= 0 ? num1[i] - "0" : 0;
    let digit2 = j >= 0 ? num2[j] - "0" : 0;

    let sum = digit1 + digit2;
    if (hasCarry) sum += 1;
    hasCarry = sum >= 10;

    ans.push(sum % 10);
    i--;
    j--;
  }

  return ans.reverse().join("");
   */
