// 1
const arr = [23, 65, 98, 5];

// Array.prototype.myMap = (callback) => { // doesn't work
// Array.prototype.myMap = function (callback) {
//   const newArray = [];
//   for (let i = 0; i < this.length; i++) newArray.push(callback(this[i]));
//   return newArray;
// };

Array.prototype.myMap = function (callback) {
  const newArray = [];
  this.forEach((v) => newArray.push(callback(v)));
  return newArray;
};

console.log(arr.myMap((item) => item * 2));
