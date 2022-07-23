const linearlySearch = (arr, x) => {
  for (let i = 0; i < arr.length; i++) {
    if (x === arr[i]) return `x is found at index ${i}`;
  }
  return `x is not found`;
};

console.log(linearlySearch([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 6));
