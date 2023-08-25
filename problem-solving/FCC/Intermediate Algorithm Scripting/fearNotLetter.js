function fearNotLetter(str) {
  for (let i = str.charCodeAt(0); i <= str.charCodeAt(str.length - 1); i++) {
    if (!str.includes(String.fromCharCode(i))) return String.fromCharCode(i);
  }
  return undefined;
}

console.log(fearNotLetter("abcdefh"));
