/*
 * @lc app=leetcode id=724 lang=javascript
 *
 * [724] Find Pivot Index
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function (nums) {
  for (let i = 0; i < nums.length; i++) {
    let l_sum = 0;
    let r_sum = 0;
    for (let j = 0; j < i; j++) {
      l_sum += nums[j];
    }
    for (let j = nums.length - 1; j >= i + 1; j--) {
      r_sum += nums[j];
    }
    if (l_sum === r_sum) {
      return i;
    }
  }
  return -1;
};
// @lc code=end

console.log(pivotIndex([1, 7, 3, 6, 5, 6]));
console.log(pivotIndex([1, 2, 3]));
// console.log(pivotIndex([2, 1, -1]));

/* 
  for (let i = 0; i < nums.length; i++) {
    let l_sum = nums.reduceRight(
      (a, c, j) => (j < i ? a + c : 0),
      nums[nums.length - 1]
    );
    let r_sum = nums.reduce((a, c, j) => (j > i ? a + c : 0), nums[0]);
    if (l_sum === r_sum) {
      return i;
    }
  }
  return -1 */
