function countdown(n) {
  // 1
  // if (n < 1) return [];
  // return [n].concat(countdown(n - 1));
  // 2
  return n < 1 ? [] : [n, ...countdown(n - 1)];
  // 3
  // if (n < 1) {
  // return [];
  // } else {
  // const countArray = countdown(n - 1);
  // countArray.unshift(n);
  // return countArray;
  // }
}
function countup(n) {
  // 1
  // if (n < 1) return [];
  // return countup(n - 1).concat([n]);
  // 2
  return n < 1 ? [] : [...countup(n - 1), n];
  // 3
  // if (n < 1) {
  // return [];
  // } else {
  // const countArray = countup(n - 1);
  // countArray.push(n);
  // return countArray;
  // }
}
console.log(countup(5));
console.log(countdown(5));
