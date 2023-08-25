/*
 * @lc app=leetcode id=242 lang=javascript
 *
 * [242] Valid Anagram
 */

// @lc code=start
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  let s_arr = Array(122).fill(0);
  let t_arr = Array(122).fill(0);
  for (let i = 0; i < s.length; i++) s_arr[s[i].charCodeAt(0)]++;
  for (let i = 0; i < t.length; i++) t_arr[t[i].charCodeAt(0)]++;
  for (let i = 0; i < 122; i++) if (s_arr[i] !== t_arr[i]) return false;
  return true;
};
// @lc code=end

console.log(isAnagram("anagram", "nagaram"));
// console.log(isAnagram("khaled", "delahk"));
// console.log(isAnagram("rat", "car"));
// console.log(isAnagram("a", "ab"));
// console.log(isAnagram("aacc", "ccac"));
// console.log(isAnagram("aacc", "ccac"));
