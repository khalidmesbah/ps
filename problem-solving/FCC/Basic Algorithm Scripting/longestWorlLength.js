function findLongestWordLength(str) {
  str = str.split(" ");
  let max = 0;
  for (let word of str) {
    if (word.length > max) max = word.length;
  }
  return max;
}

console.log(
  findLongestWordLength("The quick brown fox jumped over the lazy dog")
);
