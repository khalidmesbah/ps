/*
 * @lc app=leetcode id=575 lang=javascript
 *
 * [575] Distribute Candies
 */

// @lc code=start
/**
 * @param {number[]} candyType
 * @return {number}
 */
const distributeCandies = (candyType) => {
    let posArr = Array(100001).fill(0);
    let negArr = Array(100001).fill(0);
    let allowed = candyType.length / 2;
    let res = 0;
    candyType.map(e => {
        if (e < 0) {
            negArr[+e]++;
        } else {
            posArr[e]++;
        }
    });
    for (let i = 0; i < 100001; i++) {
        if (posArr[i]) res++;
        if (res === allowed) break;
    }
    return res;
};
// @lc code=end

console.log(distributeCandies([8, 1, 7, 1, 1, 9, -8, 2]));
// console.log(distributeCandies([1, 1, 2, 3]));
// console.log(distributeCandies([6, 6, 6, 6]));
// console.log(distributeCandies([1, 1, 2, 2, 3, 3]));