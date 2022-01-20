let arr = [2, 10, 3, 6, 1, 4, 7, 5, 8, 0, 9];

function selectionSort(arr) {
  let minimum = 0;
  let jj = 0;
  for (let j = 0; j < arr.length; j++) {
    minimum = arr[j];
    for (let i = j + 1; i < arr.length; i++) {
      if (arr[i] < minimum) {
        minimum = arr[i];
        jj = i;
      }
    }
    if (minimum < arr[j]) {
      arr[jj] = arr[j];
      arr[j] = minimum;
    }
  }
  return arr;
}

console.log(selectionSort(arr));
