/*
 * @lc app=leetcode id=56 lang=javascript
 *
 * [56] Merge Intervals
 */

// @lc code=start
/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function (intervals) {
  intervals.sort((a, b) => a[0] - b[0]);
  console.log(intervals);
  for (let i = 0; i < intervals.length - 1; i++) {
    let s1 = intervals[i][0];
    let e1 = intervals[i][1];
    let s2 = intervals[i + 1][0];
    let e2 = intervals[i + 1][1];

    if (s2 <= e1) {
      intervals[i + 1][0] = Math.min(s1, s2);
      intervals[i + 1][1] = Math.max(e1, e2);

      intervals[i][0] = -1;
      intervals[i][1] = -1;
    }
  }
  intervals = intervals.filter((e) => {
    if (e[0] !== -1) return e;
  });
  return intervals;
};
// @lc code=end

// console.log(
//   merge([
//     [1, 4],
//     [4, 5],
//   ])
// );
console.log(
  merge([
    [1, 4],
    [2, 3],
  ])
);
// console.log(merge([[1, 3]]));
// console.log(
//   merge([
//     [1, 3],
//     [2, 6],
//     [8, 10],
//     [15, 18],
//   ])
// );
// console.log(
//   merge([
//     [1, 4],
//     [0, 0],
//   ])
// );
// console.log(
//   merge([
//     [1, 4],
//     [0, 4],
//   ])
// );
// console.log(
//   merge([
//     [1, 4],
//     [0, 2],
//     [3, 5],
//   ])
// );
console.log(
  merge([
    [2, 3],
    [4, 5],
    [6, 7],
    [8, 9],
    [1, 10],
  ])
);
// console.log(
//   merge([
//     [2, 5],
//     [1, 4],
//     [9, 10],
//     [6, 9],
//   ])
// );
