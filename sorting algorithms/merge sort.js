let l1 = [1, 3, 5, 7];
let l2 = [0, 2, 4];

function mergeSort(l1, l2) {
  let l = [];

  while (l1.length && l2.length)
    l1[0] < l2[0] ? l.push(l1.shift()) : l.push(l2.shift());

  return [...l, ...l1, ...l2];
}

console.log(mergeSort(l1, l2));
