function updateInventory(arr1, ...args) {
  const arr = args.reduce((a, c) => [...a, ...c]);
  for (let i = 0; i < arr.length; i++) {
    let found = false;

    for (let j = 0; j < arr1.length; j++)
      if (arr1[j][1] === arr[i][1]) {
        arr1[j][0] += arr[i][0];
        found = true;
      }

    if (found === false) arr1.push(arr[i]);
  }

  arr1.sort((a, b) => (a[1][0] === b[1][0] ? 0 : a[1][0] < b[1][0] ? -1 : 1));

  return arr1;
}
/* 
// Example inventory lists
var curInv = [
  [21, "Bowling Ball"],
  [2, "Dirty Sock"],
  [1, "Hair Pin"],
  [5, "Microphone"],
];

var newInv = [
  [2, "Hair Pin"],
  [3, "Half-Eaten Apple"],
  [67, "Bowling Ball"],
  [7, "Toothpaste"],
];

console.log(updateInventory(curInv, newInv));

 */

console.log(
  updateInventory(
    [
      [21, "Bowling Ball"],
      [2, "Dirty Sock"],
      [1, "Hair Pin"],
      [5, "Microphone"],
    ],
    [
      [2, "Hair Pin"],
      [3, "Half-Eaten Apple"],
      [67, "Bowling Ball"],
      [7, "Toothpaste"],
    ]
  )
);
