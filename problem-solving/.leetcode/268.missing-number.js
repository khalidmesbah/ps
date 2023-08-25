/*
 * @lc app=leetcode id=268 lang=javascript
 *
 * [268] Missing Number
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  let length = nums.length,
    sum = (length * (length + 1)) / 2;
  nums.forEach((i) => (sum -= i));
  return sum;
};
// @lc code=end
console.log(missingNumber([0, 1, 2, 3, 4, 5, 6, 7, 9]));
