function rangeOfNumbers(startNum, endNum) {
  // 1
  // if (startNum === endNum + 1) return [];
  // return [startNum].concat(rangeOfNumbers(++startNum, endNum));
  // 2
  // return startNum === endNum
  // ? [startNum]
  // : [startNum].concat(rangeOfNumbers(++startNum, endNum));
  // 3
  // return startNum === endNum + 1
  // ? []
  // : [startNum].concat(rangeOfNumbers(++startNum, endNum));
  // 4
  // return startNum === endNum
  // ? [startNum]
  // : [...rangeOfNumbers(startNum, endNum - 1), endNum];
  // 5
  return startNum === endNum
    ? [startNum]
    : [startNum, ...rangeOfNumbers(++startNum, endNum)];
}
console.log(rangeOfNumbers(1, 10));
console.log(rangeOfNumbers(10, 10));
