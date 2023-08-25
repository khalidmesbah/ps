function mutation(arr) {
  arr[0] = arr[0].toLowerCase();
  arr[1] = arr[1].toLowerCase();

  for (let i = 0; i < arr[1].length; i++) {
    if (!arr[0].includes(arr[1][i])) return false;
  }

  return true;
}

console.log(mutation(["hello", "hey"])); //0
console.log(mutation(["zyxwvutsrqponmlkjihgfedcba", "qrstu"])); //1
console.log(mutation(["ate", "date"])); //0
console.log(mutation(["Noel", "Ole"])); //1
