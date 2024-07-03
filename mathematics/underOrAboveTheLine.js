// a: point # 1, b: point # 2, c: point # 3
// to check whether a point (c) is under or above the line (ab)
const underOrAbove = (a1, a2, b1, b2, c1, c2) => {
  const determinant = a2 * (c1 - b1) + a1 * (b2 - c2) - b2 * c1 + b1 * c2;
  if (determinant > 0) {
    return "above the line";
  }
  return "under the line";
};

console.log(underOrAbove(1, 10, 10, 20, 2, 14));
// console.log(underOrAbove(2, 5, 4, 10, 10, 20));
