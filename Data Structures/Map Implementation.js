class Mapy{
    #storage;
    #size;
    constructor(){
        this.#storage = {};
        this.#size = 0;
    }
    set(){
        this.#storage[this.#size++]
    }
    get size(){
        return this.#size;
    }
}

const myMap = new Mapy();
// myMap.set(1, 'one');
// myMap.set(2, 'two');
// myMap.set(3, 'three');
// myMap.set(4, 'four');
// myMap.set(5, 'five');
// console.log(myMap);



const map = new Map();
map.set(1, 'one');
map.set(2, 'two');
map.set(3, 'three');
map.set(4, 'four');
map.set(5, 'five');
console.log(map);
