/*
 * @lc app=leetcode id=541 lang=javascript
 *
 * [541] Reverse String II
 */

// @lc code=start
/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
const reverseStr = function (s, k) {
    let compos = [];
    s = [...s];
    for (let i = 0; i < s.length; i++) {
        if ((i) % (2 * k) === 0) {
            let compo = [];
            for (let j = 0; j < k; j++)
                compo.push(s[i++]);
            compos.push(...compo.reverse());
        } else if (s.slice(i - k).length < k) {
            compos.push(...s.slice(i).reverse());
            break;
        }
        compos.push(s[i]);
    }
    return compos.join('');
};
// @lc code=end


console.log(reverseStr("abcdefg", 2), 'bacdfeg');
// console.log(reverseStr("abcd", 4));
// console.log(reverseStr("abcdef", 3));
// console.log(reverseStr("abcdefg", 4));

// console.log(reverseStr("khaledgaber", 3));