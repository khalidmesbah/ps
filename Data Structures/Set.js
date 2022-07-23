// sets stores unique values
// Initialize a Set from an Array
// const set = new Set(['Beethoven', 'Mozart', 'Chopin', 'Chopin'])
const set = new Set();
set.add('Beethoven');
set.add('Mozart');
set.add('Chopin');
set.add('Chopin');
set.add([1]);
set.add([1]);
set.add({ 2: 2 });
set.add({ 2: 2 });
/* convert a set into an array */
// const arr = [...set]
set.delete(`Chopin`);
console.log(set);
console.log(set.size);
console.log(set.has(`Chopin`));

/* Note that Set does not have a way to access a value by a key or index, like Map.get(key) or arr[index]. */
/* Map and Set both have keys(), values(), and entries() methods that return an Iterator.
However, while each one of these methods have a distinct purpose in Map, Sets do not have keys,
and therefore keys are an alias for values. 
This means that keys() and values() will both return the same Iterator, and entries() will return the value twice.
It makes the most sense to only use values() with Set, 
as the other two methods exist for consistency and cross-compatibility with Map. */

console.log(set.keys());
console.log(set.values());
console.log(set.entries());
// set.clear()
// console.log(set)
console.log(`-------------------iterations-------------------`);
set.forEach((value) => console.log(value));
for (const value of set) { console.log(value); }
// Set can be used for finding the union, intersection, and difference between two sets of data.