function titleCase(str) {
  str = str.split(" ");
  for (let i in str) {
    str[i] = str[i][0].toUpperCase() + str[i].slice(1).toLowerCase();
  }
  return str.join(" ");
}
console.log(titleCase("I'm a little tea pot"));
console.log(titleCase("sHoRt AnD sToUt"));
console.log(
  titleCase("HERE IS MY HANDLE HERE IS MY SPOUT") ===
    "Here Is My Handle Here Is My Spout"
);
