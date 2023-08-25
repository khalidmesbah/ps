const Person = function (firstAndLast) {
    // Only change code below this line
    // Complete the method below and implement the others similarly
    let firstName = firstAndLast.split(" ")[0];
    let lastName = firstAndLast.split(" ")[1]
    this.getFirstName = function () {
        return firstName
    }
    this.getLastName = function () {
        return lastName
    }
    this.getFullName = function () {
        return firstName + " " + lastName;
    };
    this.setFirstName = function (first) {
        firstName = first
    }
    this.setLastName = function (last) {
        lastName = last
    }
    this.setFullName = function (firstAndLast) {
        firstName = firstAndLast.split(" ")[0];
        lastName = firstAndLast.split(" ")[1]
    }
    return firstAndLast;
};
const bob = new Person('Bob Ross');
bob.getFullName();

console.log(Object.keys(bob).length)
console.log(bob instanceof Person)
console.log(bob.firstName)
console.log(bob.lastName)
console.log(bob.getFirstName())
console.log(bob.getLastName())
console.log(bob.getFullName())

bob.setFirstName("Haskell")
bob.setLastName("Curry")

bob.setFullName("Haskell Curry")

console.log(bob.getFullName()) //Haskell Ross
console.log(bob.getLastName())