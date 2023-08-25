function addTogether(x) {
    if ([...arguments].length === 2) {
        if (typeof [...arguments][0] !== "number" || typeof [...arguments][1] !== "number") return undefined
        else return [...arguments][0] + [...arguments][1]
    } else {
        if (typeof x !== "number") return undefined
        return function (y) {
            if (typeof x !== "number" || typeof y !== "number") return undefined
            return x + y
        }
    }
}

// console.log(addTogether(2, 3)) //5
// console.log(addTogether(23, 30))//53
// console.log(addTogether(5)(7))//12

console.log(addTogether("https://www.youtube.com/watch?v=dQw4w9WgXcQ"))
// console.log(addTogether(2, "3"))
// console.log(addTogether(2)([3]))
// console.log(addTogether("2", 3))