function factorialize(num) {
  if (num === 0) return 1;
  if (num === 1) return 1;
  return num * factorialize(num - 1);
}

console.log(factorialize(5));
console.log(factorialize(0));
console.log(factorialize(1));
