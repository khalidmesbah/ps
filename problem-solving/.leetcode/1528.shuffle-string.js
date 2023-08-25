/*
 * @lc app=leetcode id=1528 lang=javascript
 *
 * [1528] Shuffle String
 */

// @lc code=start
/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function (s, indices) {
    let res="";
  s.split("").forEach((e, i) => {
    for (let j = 0; j < indices.length; j++)
      if (indices[j] == i) res+=s[j];
  });
  return res;
};
// @lc code=end

console.log(restoreString("codeleet", [4, 5, 6, 7, 0, 2, 1, 3]));
