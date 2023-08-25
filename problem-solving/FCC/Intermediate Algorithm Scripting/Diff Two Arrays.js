/* function diffArray(arr1, arr2) {
  const newArr = []
  arr1.concat(arr2).map((e) => {
    if (!arr1.includes(e) || !arr2.includes(e)) newArr.push(e)
  })
  return newArr
}
 */

function diffArray(arr1, arr2) {
  return arr1.concat(arr2).filter((e) => !arr1.includes(e) || !arr2.includes(e))
}

console.log(diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]))
console.log(diffArray([1, "calf", 3, "piglet"], [1, "calf", 3, 4]))
