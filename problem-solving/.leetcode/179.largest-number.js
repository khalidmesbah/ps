/*
 * @lc app=leetcode id=179 lang=javascript
 *
 * [179] Largest Number
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {string}
 */
const largestNumber = (nums) => {
    nums = nums.map(e => String(e)).sort((a, b) => (b + a) - (a + b)).join('');
    return parseInt(nums) === 0 ? `0` : nums;
};
// @lc code=end