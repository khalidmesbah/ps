function convertToRoman(num) {
  const [M, CM, D, CD, C, XC, L, XL, X, IX, V, IV, I] = [
    1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,
  ]
  let res = ""
  while (num > 0) {
    if (num - M >= 0) (num -= M), (res += "M")
    else if (num - CM >= 0) (num -= CM), (res += "CM")
    else if (num - D >= 0) (num -= D), (res += "D")
    else if (num - CD >= 0) (num -= CD), (res += "CD")
    else if (num - C >= 0) (num -= C), (res += "C")
    else if (num - XC >= 0) (num -= XC), (res += "XC")
    else if (num - L >= 0) (num -= L), (res += "L")
    else if (num - XL >= 0) (num -= XL), (res += "XL")
    else if (num - X >= 0) (num -= X), (res += "X")
    else if (num - IX >= 0) (num -= IX), (res += "IX")
    else if (num - V >= 0) (num -= V), (res += "V")
    else if (num - IV >= 0) (num -= IV), (res += "IV")
    else (num -= I), (res += "I")
  }
  return res
}

console.log(convertToRoman(36))
console.log(convertToRoman(3999))
console.log(convertToRoman(798))
console.log(convertToRoman(83))
