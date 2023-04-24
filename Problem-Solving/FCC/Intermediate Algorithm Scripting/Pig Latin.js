function translatePigLatin(str) {
  let vowels = ["i", "a", "u", "e", "o"]
  let containsVowels = 0
  for (let vowel of vowels) {
    if (str.split("").includes(vowel)) containsVowels = 1
  }
  if (!containsVowels) return str + "ay"
  let fi = str.split("").findIndex((e) => vowels.includes(e))
  return vowels.includes(str[0])
    ? str + "way"
    : str.slice(fi) + str.slice(0, fi) + "ay"
}

console.log(translatePigLatin("consonant"))
console.log(translatePigLatin("california"))
console.log(translatePigLatin("algorithm"))
console.log(translatePigLatin("glove"))
console.log(translatePigLatin("schwartz"))
console.log(translatePigLatin("rhythm")) // rhythmay
