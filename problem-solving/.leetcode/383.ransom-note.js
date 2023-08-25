/*
 * @lc app=leetcode id=383 lang=javascript
 *
 * [383] Ransom Note
 */

// @lc code=start
var canConstruct = function (ransomNote, magazine) {
    
  const arr = magazine.split("");
  for (let i = 0; i < ransomNote.length; i++) {
    if (arr.indexOf(ransomNote[i]) === -1) {
      return false;
    } else {
      arr.splice(arr.indexOf(ransomNote[i]), 1);
    }
  }
  return true;
};
// @lc code=end

console.log(canConstruct("aab", "baa"));
