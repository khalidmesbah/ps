function booWho(bool) {
  return typeof bool === "boolean";
}
/* function booWho(bool) {
  if (typeof(bool) === "boolean") return true;
  return false;
} */
/* 
function booWho(bool) {
  if (bool === false || bool === true) return true;
  else return false;
}
 */
console.log(booWho(null));
