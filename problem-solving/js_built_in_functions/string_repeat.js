function repeat(str, count, space) {
  if (space) str += " ";
  new_str = str;
  while (--count) {
    if (count - 1 === 0) str = str.trimEnd();
    new_str += str;
  }
  return new_str;
}

function repeat2(str, count, space) {
  let res = Array(count + 1).join(`${str}${space ? " " : ""}`);
  if (space) res = res.trimEnd();
  return res;
}

console.log("khaled".repeat(10));
console.log(repeat("khaled", 10));
console.log(repeat("khaled", 10, true));
console.log(repeat("khaled", 10, false));
console.log(`-------------repeat2-------------`);
console.log("khaled".repeat(10));
console.log(repeat2("khaled", 10));
console.log(repeat2("khaled", 10, true));
console.log(repeat2("khaled", 10, false));

// [empty spaces].join(string) = string repeated the same number of empty spaces minus 1
console.log([, , ,].join("n"));

String.prototype.myRepeat = function (count) {
  if (this === null) throw new TypeError("cannot convert");
  count = +count;
  if (count < 0 || Number.isInteger(count) === false)
    throw new RangeError("range must be a whole number");
  if (count === 0) return "";
  let str = this.valueOf();
  while (--count) {
    str += this;
  }
  return str;
};
console.log(`-------------repeat3-------------`);
console.log("".myRepeat(1));
