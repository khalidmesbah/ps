/*
 * @lc app=leetcode id=139 lang=javascript
 *
 * [139] Word Break
 */

// @lc code=start
/**
 * @param {string} s
 * @param {string[]} wordDict
 * @return {boolean}
 */
var wordBreak = function (s, wordDict) {
  const table = new Array(s.length + 1).fill(false);
  table[0] = true;
  for (let i = 0; i < table.length; i++) {
    if (table[i] === false) continue;
    for (let j = i + 1; j < table.length; j++) {
      if (wordDict.includes(s.slice(i, j))) {
        table[j] = true;
      }
    }
  }
  return table[table.length - 1];
};
// @lc code=end
// console.log(wordBreak("leetcode", ["leet", "code"]));
// console.log(wordBreak("applepenapple", ["apple", "pen"]));
// console.log(wordBreak("catsandog", ["cats", "dog", "sand", "and", "cat"]));

// console.log(wordBreak("aaaaaaa", ["aaaa", "aaa"]));
console.log(wordBreak("goalspecial", ["go", "goal", "goals", "special"]));
// console.log(wordBreak("bb", ["a", "b", "bbb", "bbbb"]));