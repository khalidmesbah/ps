/*
 * @lc app=leetcode id=7 lang=javascript
 *
 * [7] Reverse Integer
 */

// @lc code=start
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  x < 0
    ? (x = -x.toString().slice(1).split("").reverse().join(""))
    : (x = x.toString().split("").reverse().join(""));

  if (x < -1 * 2 ** 31 || x > 2 ** 31 - 1) return 0;
  return +x;
};
// @lc code=end
console.log(reverse(123));
console.log(reverse(-123));
console.log(reverse(120));
console.log(reverse(1534236469));
