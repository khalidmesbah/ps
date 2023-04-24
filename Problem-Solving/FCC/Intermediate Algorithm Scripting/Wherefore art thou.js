function whatIsInAName(collection, source) {
  return collection.filter((e) => {
    for (let p in source) {
      if (e[p] !== source[p]) {
        e = 0
      }
    }
    return e
  })
}

whatIsInAName(
  [
    { first: "Romeo", last: "Montague" },
    { first: "Mercutio", last: null },
    { first: "Tybalt", last: "Capulet" },
  ],
  { last: "Capulet" }
)
whatIsInAName(
  [{ apple: 1, bat: 2 }, { apple: 1 }, { apple: 1, bat: 2, cookie: 2 }],
  { apple: 1, cookie: 2 }
)
// [{ "apple": 1, "bat": 2, "cookie": 2 }]
