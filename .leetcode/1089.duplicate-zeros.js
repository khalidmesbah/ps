/*
 * @lc app=leetcode id=1089 lang=javascript
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */
var duplicateZeros = function (arr) {
    for (let i = 0; i < arr.length - 1; i++) {
        if (arr[i] === 0) {
            arr.pop()
            arr.splice(i++,0,0)
        }
    }
};
// @lc code=end


// duplicateZeros([1, 0, 2, 3, 4, 5]);
// duplicateZeros([1, 0, 2, 3, 0, 4, 5, 0]);