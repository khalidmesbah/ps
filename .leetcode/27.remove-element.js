/*
 * @lc app=leetcode id=27 lang=javascript
 *
 * [27] Remove Element
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
  for (let i = 0; i < nums.length; i++) if (nums[i] == val) nums.splice(i--, 1);

  return nums.length;
};
// @lc code=end

console.log(removeElement([3, 2, 2, 3], 3));
