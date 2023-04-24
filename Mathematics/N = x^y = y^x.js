for (let n = 0; n < 1000; ++n) {
  for (let x = 0; x < 1000 && n !== x; ++x) {
    for (let y = 0; y < 1000 && x !== y && n !== y; ++y) {
      if (n === x ** y && n === y ** x) {
        console.log(n, x, y, x ** y, y ** x);
      }
    }
  }
}
 