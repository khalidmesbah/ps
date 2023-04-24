function sym(...args) {
  return args.reduce((a, c) => {
    a.push(...[...new Set(c)]);
    for (let i = 0; i < a.length; i++)
      if (a.indexOf(a[i]) !== a.lastIndexOf(a[i]))
        a = a.filter((e) => e !== a[i]);
    return a;
  }, []);
}

console.log(sym([1, 2, 3], [5, 2, 1, 4]));
console.log(sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3]));
console.log(
  sym([3, 3, 3, 2, 5], [2, 1, 5, 7], [3, 4, 6, 6], [1, 2, 3], [5, 3, 9, 8], [1])
);
