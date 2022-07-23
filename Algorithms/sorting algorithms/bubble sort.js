let arr = [0, 10, 3, 6, 9, 4, 7, 5, 8, 2, 1];

function bubbleSort(arr) {
  let temp = 0;

  for (let j = 0; j < arr.length; j++) {
    for (let i = arr.length - 1; i > 0; i--) {
      if (arr[i] < arr[i - 1]) {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
      }
    }
  }
  return arr;
}

console.log(bubbleSort(arr));
