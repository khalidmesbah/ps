function palindrome(str) {
  str = str.toLowerCase()
  str = str.replace(/[.,/#!$%^&*;:{}=-_`~()]|\s+|-/g, "")
  for (let i = 0; i < str.length / 2; i++)
    if (str[i] !== str[str.length - i - 1]) return false
  return true
}

console.log(palindrome("_eye"))
console.log(palindrome("A man, a plan, a canal. Panama"))
console.log(palindrome("never odd or even"))
console.log(palindrome("My age is 0, 0 si ega ym."))
console.log(palindrome("not a palindrome"))
console.log(palindrome("almostomla"))
console.log(palindrome("0_0 (: /- :) 0-0"))
