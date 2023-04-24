const sumTo = (n) => (n === 0 ? n : n + sumTo(n - 1));
console.log(sumTo(10));
