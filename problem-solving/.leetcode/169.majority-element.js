/*
 * @lc app=leetcode id=169 lang=javascript
 *
 * [169] Majority Element
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  // Boyer-Moore Voting Algorithm

  let count = (candidate = 0);

  console.log(`beforeloop===> `, count, candidate);

  for (let i = 0; i < nums.length; i++) {
    if (count === 0) candidate = nums[i];
    nums[i] === candidate ? count++ : count--;

    console.log(`{count,candidate}===> `, count, candidate);
  }

  return candidate;
};
// @lc code=end
console.log(majorityElement([3, 2, 3]));
console.log(majorityElement([3, 3, 4]));
console.log(majorityElement([2, 2, 1, 1, 1, 2, 2]));
