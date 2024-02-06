let a = [1, 2,3,4];
let b = [3, 4, 5, 6];

let s = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let res = [];
let aIb = (a, b) => {
  for (let i = 0; i < a.length; ++i) {
    let cur = a[i];
    for (let j = 0; j < b.length; ++j) {
      if (cur === b[j] && !res.includes(cur)) {
        res.push(cur);
      }
    }
  }
  return res;
};

console.log(aIb(a, b));