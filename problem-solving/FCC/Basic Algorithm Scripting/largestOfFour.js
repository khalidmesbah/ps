function largestOfFour(arr) {
  for (let ele of arr) {
    let max = ele[0];
    for (let i = 0; i < 4; i++) {
      if (ele[i] > max) max = ele[i];
    }
    arr[arr.indexOf(ele)] = max;
  }
  return arr;
}

console.log(
  largestOfFour([
    [4, 5, 1, 3],
    [13, 27, 18, 26],
    [32, 35, 37, 39],
    [1000, 1001, 857, 1],
  ])
);

console.log(
  largestOfFour([
    [17, 23, 25, 12],
    [25, 7, 34, 48],
    [4, -10, 18, 21],
    [-72, -3, -17, -10],
  ])
);
