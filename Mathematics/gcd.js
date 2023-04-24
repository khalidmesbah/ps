const gcd2 = (a, b) => (!b ? a : gcd(b, a % b));
const gcd = (...arr) => {
  return [...arr].reduce((a, b) => gcd2(a, b));
};

console.log(gcd(12, 13));
console.log(gcd(9, 3));
console.log(gcd(8, 36));
console.log(gcd(...[12, 8, 32]));





