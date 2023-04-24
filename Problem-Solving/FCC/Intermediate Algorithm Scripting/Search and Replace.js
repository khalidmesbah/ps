function myReplace(str, before, after) {
  str.split(" ").includes(before[0].toUpperCase() + before.slice(1))
    ? (after = after[0].toUpperCase() + after.slice(1))
    : (after = after[0].toLowerCase() + after.slice(1))
  return str.replace(before, after)
}

console.log(
  myReplace("A quick brown fox jumped over the lazy dog", "jumped", "leaped")
)
console.log(myReplace("I think we should look up there", "up", "Down")) // I think we should look down there
