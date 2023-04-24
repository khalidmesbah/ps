/*
 * @lc app=leetcode id=38 lang=javascript
 *
 * [38] Count and Say
 */

// @lc code=start
/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function (n) {
    if
  while (n-- > 1) {
    let next = "";
    let count = 1;
    let current = res[0];

    for (let i = 1; i < res.length + 1; i++) {
      if (res[i] !== current) {
        next += `${count}${current}`;
        current = res[i];
        count = 1;
      } else {
        count += 1;
      }
    }

    res = next;
  }
};
// @lc code=end
console.log(countAndSay(1));
console.log(countAndSay(4));