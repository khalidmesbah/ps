function sumFibs(num) {
    let arr = [1, 1];
    for (let i = 2; i <= num; i++)
        arr[i] = arr[i - 1] + arr[i - 2]
    let i = arr.filter(e => e <= num && e % 2 !== 0).reduce((a, c) => a + c, 0)
    return i

}

sumFibs(10);