/*
 * @lc app=leetcode id=344 lang=javascript
 *
 * [344] Reverse String
 */

// @lc code=start
/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function (s) {
  let tmp = "";
  let i = 0;
  while (i < s.length / 2) {
    tmp = s[s.length - 1 - i];
    s[s.length - 1 - i] = s[i];
    s[i++] = tmp;
  }

  return s;
};
// @lc code=end
