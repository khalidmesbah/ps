/*
 * @lc app=leetcode id=905 lang=javascript
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function (nums) {
  let new_arr = [];
  nums.forEach((e, i) => {
    e % 2 ? new_arr.push(e) : new_arr.unshift(e);
  });
  return new_arr;
};
// @lc code=end
console.log(sortArrayByParity([3, 1, 2, 4]));
