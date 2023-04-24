/*
 * @lc app=leetcode id=26 lang=javascript
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let i = 1;
  while (i < nums.length) {
    if (nums[i - 1] === nums[i]) nums.splice(i--, 1);
    i++;
  }

  return nums.length;
};
// @lc code=end

console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));
console.log(removeDuplicates([1, 1, 2]));
console.log(removeDuplicates([1]));
