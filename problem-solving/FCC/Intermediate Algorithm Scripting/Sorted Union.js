/* function uniteUnique(arr) {
  let newArr = [];
  [...arguments].map((e) =>
    e.map((n) => {
      if (!newArr.includes(n)) newArr.push(n);
    })
  );
  return newArr;
}
 */
const uniteUnique = (...arr) => [...new Set(arr.flat())];

uniteUnique([1, 3, 2], [5, 2, 1, 4], [2, 1]);
uniteUnique([1, 2, 3], [5, 2, 1]);

let arr = [
  [1, 3, 2],
  [5, 2, 1, 4],
  [2, 1],
].flat();
arr = new Set(arr);
arr = [...arr];
console.log(arr);
