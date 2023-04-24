/*
 * @lc app=leetcode id=6 lang=javascript
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function (s, numRows) {
  if (numRows === 1) return s;
  let n = (numRows - 1) * 2;
  let res = "";
  for (let r = 0; r < numRows; r++) {
    for (let i = 0; i < s.length; i++) {
      if (r > 0 && r < numRows - 1 && n - r * r < s.length) {
        console.log(n - 2 * r);
      }
      if (!(i % n)) {
        res += s[i + r] || "";
      }
    }
  }
  return res;
};
/* 
    s[4] = A, 4 * 1
    s[5] = L,4
    s[10] = R, 4 * 2
    s[11] = I
*/
// @lc code=end
console.log(convert("PAYPALISHIRING", 4));
