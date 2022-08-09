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
set.add(4).add(5).add(6).add(6);
/* accessing set with index */
// console.log(set[0]) // === undefined
/* deleting */
console.log(set.delete(6)); // if exists => true
console.log(set.delete(20)); // if not exists => false
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
const Iterator = set.values();
console.log(`👉 ------------------------------------------------👉`);
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ~ file: Set.js ~ line 34 ~ Iterator`, Iterator.next());
console.log(`👉 ------------------------------------------------👉`);

// console.log(`set.keys()`,set.keys());
// console.log(`set.values()`,set.values());
// console.log(set.entries());
// // set.clear()
// // console.log(set)
// console.log(`-------------------iterations-------------------`);
// set.forEach((value) => console.log(value));
// for (const value of set) { console.log(value); }
// // Set can be used for finding the union, intersection, and difference between two sets of data.


/* Set VS weekSet */
/* 
    Set:-
    1 - store any data type values
    2 - have size property
    3 - have keys, values, entries
    4 - can use forEach
    weekSet:-
    1 - store objects only
    2 - doesn't have size property
    3 - doesn't have keys, values, entries and clear
    4 - can't use foreEach
*/

/* weekSet */
let ws = new WeakSet([{ a: 1 }, { b: 2 }]);
console.log(ws);
