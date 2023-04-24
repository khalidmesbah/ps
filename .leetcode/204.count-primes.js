/*
 * @lc app=leetcode id=204 lang=javascript
 *
 * [204] Count Primes
 */

// @lc code=start
/**
 * @param {number} n
 * @return {number}
 */
const countPrimes = (n) => {
    const arr = Array(n + 1).fill(0).fill(1, 2, n);
    for (let i = 2; i < n; i++) {
        if (arr[i]) {
            for (let j = i + i; j < n; j += i) {
                arr[j] = 0;
            }
        }
    }
    return arr.reduce((a, b) => a + b);
};
// @lc code=end

// console.log(countPrimes(0));
// console.log(countPrimes(1));
// console.log(countPrimes(2));
// console.log(countPrimes(3));
// console.log(countPrimes(4));
// console.log(countPrimes(10));
// console.log(countPrimes(20));
// countPrimes(977);
