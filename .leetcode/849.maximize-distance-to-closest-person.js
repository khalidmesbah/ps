/*
 * @lc app=leetcode id=849 lang=javascript
 *
 * [849] Maximize Distance to Closest Person
 */

// @lc code=start
/**
 * @param {number[]} seats
 * @return {number}
 */
function maxDistToClosest(seats) {
  //   first zeros
  let snoz = 0;
  for (let i = 0; i < seats.length; i++) {
    if (seats[i] === 1) {
      // console.log(`=${snoz}`);
      break;
    } else snoz++;
  }

  // end zeros
  let enoz = 0;
  for (let i = seats.length - 1; i >= 0; i--) {
    if (seats[i] === 1) {
      // console.log(`=${enoz}`);
      break;
    } else enoz++;
  }

  let p = 0;
  let n = 0;
  let d = 0;
  let r = 0;

  let t = true;
  let t2 = true;

  for (let i = 0; i < seats.length; i++) {
    if (seats[i] === 1 && t) {
      p = i;
      t = false;
      continue;
    }

    if (seats[i] === 1 && t2) {
      n = i;
      d = n - p;
      t2 = false;
      continue;
    }

    if (seats[i] === 1 && i - n > d) {
      p = n;
      n = i;
      d = n - p;
    }
  }

  return Math.max(Math.floor(d / 2), enoz, snoz);
}
// @lc code=end

console.log(maxDistToClosest([1, 0, 0, 0, 1, 0, 1]));
console.log(maxDistToClosest([1, 0, 0, 0]));
console.log(maxDistToClosest([0, 1]));
console.log(maxDistToClosest([1, 0, 0, 1]));
