let arr = [0, 10, 3, 6, 9, 4, 7, 5, 8, 2, 1];

function insertionSort(arr) {
  let current;

  for (let i = 0; i < arr.length; i++) {
    current = arr[i];

    let j = i - 1;

    while (current < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = current;
  }
  return arr;
}

console.log(insertionSort(arr));
