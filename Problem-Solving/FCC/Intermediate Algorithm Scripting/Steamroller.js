const steamrollArray = (arr) =>
    arr.join().split(",").filter(e => Boolean(e)).map(e =>
        (e == "[object Object]") ? {} : (!isNaN(e)) ? +e : e
    )

console.log(steamrollArray([1, [2], [3, [[4]]]]))
console.log(steamrollArray([[["a"]], [["b"]]]))
console.log(steamrollArray([1, [2], [3, [[4]]]]))
console.log(steamrollArray([1, [], [3, [[4]]]]))
console.log(steamrollArray([1, {}, [3, [[4]]]]))