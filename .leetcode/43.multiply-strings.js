/*
 * @lc app=leetcode id=43 lang=javascript
 *
 * [43] Multiply Strings
 */

// @lc code=start
/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
const multiply = (num1, num2) => {
    const res = Array(num1.length + num2.length).fill(0);
    for (let i = num2.length - 1; i >= 0; --i) {
        for (let j = num1.length - 1; j >= 0; --j) {
            const index = i + j + 1;
            let tmp = res[index] + num1[j] * num2[i];;
            if (tmp > 9) res[index - 1] += (tmp - tmp % 10) / 10;
            res[index] = tmp % 10;
        }
    }
    while (res[0] === 0 && res.length > 1) res.shift();
    return res.join('');
};
// @lc code=end

// console.log(multiply("123456789", "987654321"));
// console.log(multiply("123", "456"));
// console.log(multiply("871", "394"));
// console.log(multiply("2", "3"));
// console.log(multiply("0", "0"));
// console.log(multiply("498828660196", "840477629533"));
// 
/* 
const start = performance.now();
multiply("123456788748237642658724892798573498237498123456788748237642658724892798573498237498", "123456788748237642658724892798573498237498123456788748237642658724892798573498237498");
const end = performance.now();
console.log(`the performance is: ${end - start}`);
 */