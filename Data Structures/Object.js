// objects store key/value pairs
// Objects change all keys to strings.
// This is why if you attempt to use an Object as a key, it will print out the string object Object instead.


/* Check if an Object has a Property */
const obj = {
    name :'khaled',
    age:21
}
console.log('age' in obj)
console.log(obj.hasOwnProperty('age'))