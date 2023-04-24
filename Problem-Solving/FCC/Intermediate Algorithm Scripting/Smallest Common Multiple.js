/* function smallestCommons(arr) {
    let num = 1;
    let found = false
    while (!found) {
        found = true
        for (let i = Math.min(...arr); i <= Math.max(...arr); i++) {
            if ((num % i) !== 0) found = false
        }
        num++
    }
    return --num
}
 */
function smallestCommons(arr) {
    function getPrimeFactors(num) {
        const factors = {};
        for (let prime = 2; prime <= num; prime++) {
            // Count occurances of factor
            // Note that composite values will not divide num
            while ((num % prime) === 0) {
                factors[prime] = (factors[prime]) ? factors[prime] + 1 : 1;
                num /= prime;
            }
        }
        return factors;
    }
    let sum = 1;
    let newArr = {};
    for (let i = Math.min(...arr); i <= Math.max(...arr); i++) {
        for (let e in getPrimeFactors(i)) {
            if (newArr.hasOwnProperty(e)) {
                if (getPrimeFactors(i)[e] > newArr[e]) newArr[e] = getPrimeFactors(i)[e]
            }
            else newArr[e] = getPrimeFactors(i)[e]
        }
    }
    for (let p in newArr)
        while (newArr[p]--) sum *= +p
    return sum
}

// console.log(smallestCommons([1, 5]))
console.log(smallestCommons([23, 18]))
// console.log(6056820)



// console.log(getPrimeFactors(18))
// console.log(getPrimeFactors(19))
// console.log(getPrimeFactors(20))
// console.log(getPrimeFactors(21))
// console.log(getPrimeFactors(22))
// console.log(getPrimeFactors(23))