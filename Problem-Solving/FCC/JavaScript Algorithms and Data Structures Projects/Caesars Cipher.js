function rot13(str) {
  let originalOrder = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  let shiftedOrder = originalOrder.slice(13) + originalOrder.slice(0, 13)
  //   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  //   "NOPQRSTUVWXYZABCDEFGHIJKLM"
  let myRegex = /[^a-z0-9]|\s+|\r?\n|\r/gim
  let res = ""
  str.split("").map((e) => {
    if (!myRegex.test(e)) res += originalOrder[shiftedOrder.indexOf(e)]
    else res += e
  })
  return res
}

console.log(rot13("SERR PBQR PNZC"))
console.log(rot13("SERR CVMMN!"))
console.log(rot13("SERR YBIR?"))
console.log(rot13("GUR DHVPX OEBJA SBK WHZCF BIRE GUR YNML QBT."))
