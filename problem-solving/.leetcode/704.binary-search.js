/*
 * @lc app=leetcode id=704 lang=javascript
 *
 * [704] Binary Search
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target, start = 0, end = nums.length) {
  if (start > end) return -1;

  const middle = Math.floor((start + end) / 2);

  return nums[middle] === target
    ? middle
    : nums[middle] > target
    ? search(nums, target, start, middle - 1)
    : search(nums, target, middle + 1, end);
};
// @lc code=end

console.log(search([-1, 0, 3, 5, 9, 12], 9));
console.log(search([-1, 0, 3, 5, 9, 12], 2));
