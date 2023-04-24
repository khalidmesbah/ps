function sumPrimes(num) {
    let sum = 0;
    fl: while (num > 1) {
        for (let i = 2; i < num; i++) if ((num % i) === 0) {
            num--;
            continue fl;
        }
        sum += num--
    }
    return sum
}

sumPrimes(10);
sumPrimes(977)