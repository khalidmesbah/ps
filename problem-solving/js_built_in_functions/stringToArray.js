// strToArr(str) === str.split("")
function strToArr(str) {
  let arr = [];
  let length = 0;
  while (str[length] !== undefined) arr.push(str[length]), length++;

  return arr;
}

console.log(strToArr("Mesbah"), "Mesbah".split(""));
