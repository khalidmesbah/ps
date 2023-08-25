function destroyer(arr) {
  const args = [...arguments].slice(1)
  return arr.filter((e) => !args.includes(e))
}

console.log(destroyer([1, 2, 3, 1, 2, 3], 2, 3))
console.log(destroyer([1, 2, 3, 5, 1, 2, 3], 2, 3))
