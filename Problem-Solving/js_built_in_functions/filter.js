const s = [23, 65, 98, 5];

/* Array.prototype.myFilter = function (callback) {
  const newArray = [];
  for (let i = 0; i < this.length; i++)
    if (callback(this[i])) newArray.push(this[i]);
  return newArray;
};

 */

/* Array.prototype.myFilter = function (callback) {
  // Only change code below this line
  const newArray = [];
  this.map(e => {
    if (callback(e)) newArray.push(e);
  });
  // Only change code above this line
  return newArray;
}; */
Array.prototype.myFilter = function (callback) {
  const newArray = [];
  this.forEach((v) => (callback(v) ? newArray.push(v) : ""));
  return newArray;
};

const new_s = s.myFilter(function (item) {
  return item % 2 === 1;
});
