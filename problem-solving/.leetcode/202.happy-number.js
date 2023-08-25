/*
 * @lc app=leetcode id=202 lang=javascript
 *
 * [202] Happy Number
 */

// @lc code=start
/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n, isNotHappy = []) {
  let nn = String(n);
  if (n <= 0 || isNotHappy.includes(nn)) return false;
  isNotHappy.push(nn);
  let res = 0;
  for (let i = 0; i < nn.length; i++) res += (+nn[i]) ** 2;
  if (res === 1) return true;
  return isHappy(res, isNotHappy);
};
// @lc code=end

console.log(isHappy(19));
console.log(isHappy(2));
console.log(isHappy(10));
