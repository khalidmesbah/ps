function shiftString(str, num) {
  return str.slice(num) + str.slice(0, num)
}

console.log("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
console.log(shiftString("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 13))
console.log(shiftString("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1))
