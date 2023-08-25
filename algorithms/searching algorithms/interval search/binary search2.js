const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];

function findMe(target, start, end) {
  if (start > end) return `not found`;

  const middle = Math.floor((start + end) / 2);

  return arr[middle] === target
    ? `found the target at index ${middle}`
    : arr[middle] > target
    ? findMe(target, start, middle - 1)
    : findMe(target, middle + 1, end);
}

console.log(findMe(1, 0, arr.length));
