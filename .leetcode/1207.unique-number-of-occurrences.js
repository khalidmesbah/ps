/*
 * @lc app=leetcode id=1207 lang=javascript
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function (arr) {
  let acc_arr = [...Array(1000)].map((x) => 0);
  let acc_arr_neg = [...Array(1000)].map((x) => 0);
  let acc = [];
  let acc_neg = [];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] < 0) {
      acc_arr_neg[Math.abs(arr[i])]++;
    } else {
      acc_arr[Math.abs(arr[i])]++;
    }
  }
  //  console.log(acc_arr,acc_arr_neg);
  for (let i = 0; i < acc_arr.length; i++) if (acc_arr[i]) acc.push(acc_arr[i]);
  for (let i = 0; i < acc_arr_neg.length; i++)
    if (acc_arr_neg[i]) acc_neg.push(acc_arr_neg[i]);
  //   console.log(acc, acc_neg);
  let final_acc_arr = acc.concat(acc_neg);
  //   console.log(final_acc_arr);
  for (let i = 0; i < final_acc_arr.length; i++) {
    for (let j = i + 1; j < final_acc_arr.length; j++) {
      if (final_acc_arr[i] === final_acc_arr[j]) return false;
    }
  }
  return true;
};
// @lc code=end
// console.log(uniqueOccurrences([1, 2, 2, 1, 1, 3]));
// console.log(uniqueOccurrences([1, 2]));
// console.log(uniqueOccurrences([-3, 0, 1, -3, 1, 1, 1, -3, 10, 0]));
console.log(
  uniqueOccurrences([
    -130, 21, -154, 159, -44, -126, 165, 68, -126, -126, -126, 128, -94, 165,
    -30, -44, -39, -94, 21, -130, 68, 68, 128, -130, -39, 181, 68, 68, 68, 139,
    139, -39, 21, 21, -39, 68, 128, 131, -126, -154, -30, 165, 21, 159, 181,
    -39, -126, 131, -94, -44, 131, 128, 21, -44, 128, -94, 183, -94, 131, 139,
    -44, 128, 21, 181, -44, 131, 128, 131, 21, 68, 181, -44, -126, -130, 131,
    -190, 131, 181, 165, -94, 165, 165, -30, -154, 68, -39, -44, 165, -39, -126,
    68, 68, -130, 68, -94, 181, -44, 131, 21, 183, -44, 21, -39, -130, -39, 131,
    21, 165, 165, -126, 165, -44, -94, 68, 68, -94, -126, -126, -30, 181, 165,
    68, -44, -39, -94, -126, -126, -30, 68, 181, -44, -94, -126, -44, -94, -30,
    131, 165, -190, -130, -94, -94, 181, 128, 181, 181, 181, 139, -130, -94,
    -130, -130, 139, -130, -90, -154, 181, 165, -30, -154, 165, -190, 159, 165,
    139, -126, -44, 131, -44, -190, -126, -130, -94, 128, -154, 68, -130, -130,
    68, 21, -44, -30, -126, -126, 131, 159, -190, -126, 181, 139,
  ])
);
