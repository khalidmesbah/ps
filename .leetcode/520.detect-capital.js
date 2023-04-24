/*
 * @lc app=leetcode id=520 lang=javascript
 *
 * [520] Detect Capital
 */

// @lc code=start
/**
 * @param {string} word
 * @return {boolean}
 */
const detectCapitalUse = function (word) {
    return word === word.toLowerCase()
        ? true
        : word === word.toUpperCase()
            ? true
            : word === word[0].toUpperCase() + word.slice(1).toLowerCase()
                ? true
                : false;
};
// @lc code=end