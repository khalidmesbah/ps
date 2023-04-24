/*
 * @lc app=leetcode id=1748 lang=javascript
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
const sumOfUnique = function (nums) {
    const arr = Array(200).fill(0);
    nums.map(e => arr[e]++);
    let sum = 0;
    for (let i = 0; i < 200; ++i)
        if (arr[i] === 1) sum += i;
    return sum;
};
// @lc code=end
