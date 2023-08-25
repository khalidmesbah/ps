function reverseString(str) {
  /*   str = str.split("");

  for (let i = 0; i < str.length / 2; i++) {
    let temp = str[i];
    str[i] = str[str.length - i - 1];;
    str[str.length - i - 1] = temp;
  }

  return str.join(""); */
  let reversedStr = "";
  for (let i = str.length; i > 0; --i, reversedStr += str[i]);
  return reversedStr;
}

console.log(reverseString("khalid"));
console.log(reverseString("mesbah"));
