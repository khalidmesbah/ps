function frankenSplice(arr1, arr2, n) {
  let arr = [...arr2];
  arr.splice(n, 0, ...arr1);
  return arr;
}

// console.log(frankenSplice([1, 2, 3], [4, 5, 6], 1));
console.log(frankenSplice([1, 2, 3], [4, 5], 1));
