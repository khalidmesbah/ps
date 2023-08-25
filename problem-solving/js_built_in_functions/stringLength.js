function stringLength(str) {
  let length = 0;
  /* 1 */
  //   str.split("").forEach(() => length++);
  /* 2 */
  //   str.split("").map(() => length++);
  /* 3 */
  while (str[length] !== undefined) length++;

  return length;
}

console.log(stringLength("khaled"));
console.log(stringLength("  "));
