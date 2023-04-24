/*
 * @lc app=leetcode id=709 lang=javascript
 *
 * [709] To Lower Case
 */

// @lc code=start
/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function (s) {
    return [...s].reduce((a, c) => {
        if (90 >= c.charCodeAt() && c.charCodeAt() >= 65)
            c = String.fromCharCode(c.charCodeAt() + 32);
        return a+=c;
    }, "");
};
// @lc code=end