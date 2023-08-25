/* function bouncer(arr) {
  let newArr = [];
  for (let e of arr) {
    if (Boolean(e)) {
      newArr.push(e);
    }
  }
  return newArr;
}
 */
function bouncer(arr) {
  return arr.filter(Boolean);
}
console.log(bouncer([7, "ate", "", false, 9]));
