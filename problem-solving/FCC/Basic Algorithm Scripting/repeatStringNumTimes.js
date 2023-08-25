function repeatStringNumTimes(str, num) {
  if (num <= 0) return "";
  let len = str.length;
  while (--num) str += str.slice(0, len);
  return str;
}
console.log("khaled".repeat(10));
console.log(repeatStringNumTimes("khaled", 10));
console.log(repeatStringNumTimes("khaled", 10));
