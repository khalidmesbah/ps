let a = [1, 2, 3, 4];
let b = [3, 4, 5, 6, 7];

let s = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let res = [];
let aUb = (a, b) => {
  res = a;
  for (let i = 0; i < b.length; ++i) if (!res.includes(b[i])) res.push(b[i]);
  return res;
};

console.log(aUb(a, b));
