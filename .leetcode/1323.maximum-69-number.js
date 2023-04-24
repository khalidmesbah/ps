/*
 * @lc app=leetcode id=1323 lang=javascript
 *
 * [1323] Maximum 69 Number
 */

// @lc code=start
/**
 * @param {number} num
 * @return {number}
 */
const maximum69Number = (num) => {
    num = [...String(num)];
    for (let i = 0; i < num.length; i++) {
        if(num[i] == '6'){
            num[i] = '9'
            return +num.join('')
        }        
    }
    return +num.join('')
};
// @lc code=end