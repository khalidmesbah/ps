/*
 * @lc app=leetcode id=231 lang=javascript
 *
 * [231] Power of Two
 */

// @lc code=start
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
  if (n < 1) return false;
  while (n > 1) {
    n /= 2;
  }
  return n === 1;
};
// @lc code=end

console.log(isPowerOfTwo(1)); // true
console.log(isPowerOfTwo(16)); // true
console.log(isPowerOfTwo(4)); // true
console.log(isPowerOfTwo(3)); //false
