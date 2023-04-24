function reverseString(str) {
  str = str.split("");
  for (let i = 0; i < str.length / 2; i++) {
    let first = str[i];
    let last = str[str.length - i - 1];
    str[i] = last;
    str[str.length - i - 1] = first;
  }

  return str.join("");
}

console.log(reverseString("hello"));
