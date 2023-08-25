function sumAll(arr) {
  let maxNum = Math.max(arr[0], arr[1]);
  let minNum = Math.min(arr[0], arr[1]);
  let ans = (maxNum * (maxNum + 1)) / 2 - (minNum * (minNum + 1)) / 2;
  return ans + minNum;
}

sumAll([1, 4]);
sumAll([4, 1]);
sumAll([5, 10]);
sumAll([10, 5]);
