// maps stores ordered collections of key/value pairs
/* 
A Map is a collection of key/value pairs that can use any data type as a key and can maintain the order of its entries.
Maps have elements of both Objects (a unique key/value pair collection) and Arrays (an ordered collection),
but are more similar to Objects conceptually.This is because,
although the size and order of entries is preserved like an Array, the entries themselves are key/value pairs like Objects.
 */
/* make a map */
const map = new Map();
map.set('firstName', 'Luke');
map.set('lastName', 'Skywalker');
map.set('occupation', 'Jedi Knight');
console.log(map);

const map2 = new Map([
    [0, 'zero'],
    [1, 'one'],
    [2, 'two'],
    [3, 'three'],
    [4, 'four'],
    [5, 'five']
]);
console.log(map2);

const luke = {
    firstName: 'Luke',
    lastName: 'Skywalker',
    occupation: 'Jedi Knight',
};

console.log(Object.entries(luke));
const map3 = new Map(Object.entries(luke));
console.log(map3);
/* converting a map to an object */
const obj = Object.fromEntries(map);
console.log(obj);
/* converting a map to an array */
const arr = Array.from(map);
console.log(arr);
/* map keys */
/* Maps accept any data type as a key, and do not allow duplicate key values.
We can demonstrate this by creating a map and using non-string values as keys,
 as well as setting two values to the same key. */

// Create an object
const objAsKey = { foo: 'bar' };

const map4 = new Map();

// Set this object as the key of a Map
map4.set(objAsKey, 'What will happen?');
map4.set(objAsKey, 'What will happen again?');
map4.set({}, 'One');
map4.set({}, 'Two');
map4.set(1, 'One');
map4.set(1, 'Two');
console.log(map4);


/* Getting and Deleting Items from a Map */
// map4.clear(); // empty the map
/* 
The keys(), values(), and entries() methods all return a MapIterator, which is similar to an Array in that you can use for...of to loop through the values.
*/
// map4.entries() // entries = [keys, values]
// map4.keys(); // keys
// map4.values(); // values
// map4.has(0) // check if key exist
// map4.get(objAsKey) // get the key value
// map4.size // number of key/value pairs
// map4.delete(objAsKey) // delete a key/value pair
console.log(map4);
/* // Map
Map.prototype.forEach((value, key, map) = () => {}
// Array
Array.prototype.forEach((item, index, array) = () => {}
 */

/* iteration */
// Destructure the key and value out of the Map item
map4.forEach((value, key) => {
    console.log(key, value);
});
for (const [key, value] of map4) {
    // Log the keys and values of the Map with for...of
    console.log(key, value);
}