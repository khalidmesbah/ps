/*
 * @lc app=leetcode id=674 lang=javascript
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var findLengthOfLCIS = function (nums) {
    let len = 1;
    let maximum = 1;
    for (let i = 0; i < nums.length - 1; i++) {
        if (nums[i + 1] <= nums[i]) {
            len = 1;
        } else {
            if (++len > maximum) maximum = len;
        }
    }
    return maximum;
};
// @lc code=end
findLengthOfLCIS([2, 2, 2, 2, 2]);
findLengthOfLCIS([1, 3, 5, 4, 7]);
findLengthOfLCIS([1, 3, 5, 7]);

