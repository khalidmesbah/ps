/*
 * @lc app=leetcode id=30 lang=javascript
 *
 * [30] Substring with Concatenation of All Words
 */

// @lc code=start
/**
 * @param {string} s
 * @param {string[]} words
 * @return {number[]}
 */
var findSubstring = function (s, words) {
  let possibilities = permutations(words);
  for (let i = 0; i < possibilities.length; i++) {
    if (typeof possibilities[i] !== "string")
      possibilities[i] = possibilities[i].join("").toString();
  }
  console.log(possibilities);
  let indices = [];
  for (let i = 0; i < s.length; i++) {
    for (let j = 0; j < possibilities; j++) {
      if (s.slice(i).startsWith(possibilities[j])) {
        if (!indices.includes(i)) indices.push(i);
      }
    }
  }
  return indices;
};
const permutations = (arr) => {
  if (arr.length <= 2) return arr.length === 2 ? [arr, [arr[1], arr[0]]] : arr;
  return arr.reduce(
    (acc, item, i) =>
      acc.concat(
        permutations([...arr.slice(0, i), ...arr.slice(i + 1)]).map((val) => [
          item,
          ...val,
        ])
      ),
    []
  );
};
// @lc code=end
// console.log(findSubstring("barfoofoobarthefoobarman", ["bar", "foo", "the"]));
// console.log(`=====================`);
// console.log(findSubstring("barfoothefoobarman", ["foo", "bar"]));
// console.log(`=====================`);
// console.log(
//   findSubstring("wordgoodgoodgoodbestword", ["word", "good", "best", "word"])
// );
// console.log(`=====================`);
// console.log(findSubstring("a", ["a"]));
// console.log(`=====================`);
// console.log(findSubstring("mississippi", ["is"]));
// console.log(`=====================`);
console.log(
  findSubstring("bcabbcaabbccacacbabccacaababcbb", [
    "c",
    "b",
    "a",
    "c",
    "a",
    "a",
    "a",
    "b",
    "c",
  ])
);
