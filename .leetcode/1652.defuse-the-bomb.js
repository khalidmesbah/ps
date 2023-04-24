/*
 * @lc app=leetcode id=1652 lang=javascript
 *
 * [1652] Defuse the Bomb
 */

// @lc code=start
/**
 * @param {number[]} code
 * @param {number} k
 * @return {number[]}
 */
var decrypt = function (code, k) {
  let new_code = [...code];
  if (k > 0) {
    for (let i = 0; i < code.length; i++) {
      let res = 0;
      for (let j = 0; j < k; j++) {
        let l = i + j + 1;
        if (l >= code.length) l -= code.length;
        res += code[l];
      }
      new_code[i] = res;
    }
  } else if (k === 0) new_code.fill(0);
  else {
    for (let i = code.length - 1; i >= 0; i--) {
      let res = 0;
      for (let j = Math.abs(k) - 1; j >= 0; j--) {
        let l = i - 1 - j;
        if (l < 0) l += code.length;
        res += code[l];
      }
      new_code[i] = res;
    }
  }
  return new_code;
};
// @lc code=end
console.log(decrypt([5, 7, 1, 4], 3), [12, 10, 16, 13]); //[12,10,16,13]
console.log(decrypt([5, 2, 2, 3, 1], 3), [7, 6, 9, 8, 9]); // [7,6,9,8,9]
console.log(decrypt([2, 4, 9, 3], -2), [12, 5, 6, 13]); // [12,5,6,13]
// console.log(decrypt([1, 2, 3, 4], 0));
