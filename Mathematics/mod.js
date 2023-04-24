const modulus = (a, b) => {
  return a - b * Math.trunc(a / b);
};

console.log(modulus(27, 12));
