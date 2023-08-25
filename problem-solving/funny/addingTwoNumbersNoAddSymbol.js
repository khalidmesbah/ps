const prompt = require("prompt-sync")();

console.log("Type x and y to calc their sum");

let x = prompt("X:");
let y = prompt("Y:");

for (let i = 0; i < y; i++, x++);

console.log(x);
