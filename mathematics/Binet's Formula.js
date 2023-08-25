// Memoization + recursion
/**
 *
 *
 * @param {*} n
 * @param {*} [cache=new Map([[0, 0], [1, 1]])]
 * @return {*} 
 */
function fib(n, cache = new Map([[0, 0], [1, 1]])) {
    if (cache.has(n)) return cache.get(n);
    cache.set(n, fib(n - 1, cache) + fib(n - 2, cache));
    return cache.get(n);
}
// Binet's Formula
function fib2(n) {
    const sr = Math.sqrt(5);
    return (1 / sr) * (((1 + sr) / 2) ** n - ((1 - sr) / 2) ** n).toFixed(0);
}

console.log(fib(50));
console.log(fib2(50));

