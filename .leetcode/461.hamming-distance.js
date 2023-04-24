/*
 * @lc app=leetcode id=461 lang=javascript
 *
 * [461] Hamming Distance
 */

// @lc code=start
/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function (x, y) {
  x = x.toString(2);
  y = y.toString(2);
  let cnt = 0;
  let max = Math.max(x.length, y.length);
  for (let i = 0; i < max; i++) {
    if (x[i] === undefined) x = "0" + x;
    if (y[i] === undefined) y = "0" + y;
    if (x[x.length - i - 1] !== y[y.length - i - 1]) cnt++;
  }
  return cnt;
};
// @lc code=end

console.log(hammingDistance(1, 4));
console.log(`================`);
console.log(hammingDistance(3, 1));
console.log(`================`);
console.log(hammingDistance(4, 14));
