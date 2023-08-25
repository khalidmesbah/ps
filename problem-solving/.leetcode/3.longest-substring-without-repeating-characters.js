/*
 * @lc app=leetcode id=3 lang=javascript
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let max = 0 ,
    start = 0;
  const obj = {};

  for (let end = 0; end < s.length; end++) {
    obj[s[end]] = obj[s[end]] + 1 || 1;

    while (obj[s[end]] > 1) {
      if (obj[s[start]] > 1) {
        obj[s[start]]--;
      } else {
        delete obj[s[start]];
      }
      start++;
    }

    max = Math.max(max, (end - start) + 1);
  }
  return max;
};
// @lc code=end

console.log(lengthOfLongestSubstring("abcabcbb"));
console.log(lengthOfLongestSubstring("bbbbb"));
console.log(lengthOfLongestSubstring("pwwkew"));