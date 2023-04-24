/*
 * @lc app=leetcode id=287 lang=javascript
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function (nums) {
    const freq = new Array(nums.length + 1).fill(0);
    for (let num of nums) freq[num]++;
    return freq.indexOf(Math.max(...freq));
};

// @lc code=end

// console.log(findDuplicate([1, 3, 4, 2, 2]));
// console.log(findDuplicate([3, 1, 3, 4, 2]));
