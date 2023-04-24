/*
 * @lc app=leetcode id=1556 lang=javascript
 *
 * [1556] Thousand Separator
 */

// @lc code=start
/**
 * @param {number} n
 * @return {string}
 */
var thousandSeparator = function (n) {
  n = n.toString().split("");
  let c = 0;
  let nn = 1;
  for (let i = 0; i < n.length; i++) {
    c++;
    if (c === 3) {
      n[n.length - c * nn - 1] += ".";
      c = 0;
      nn += 1;
    }
  }
  return n.join("");
};
// @lc code=end

console.log(thousandSeparator(1234));
console.log(thousandSeparator(987));
