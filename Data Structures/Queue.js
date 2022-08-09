/* 1 */
// class Queue {
//     constructor(...elements) {
//         this.elements = [...elements];
//     }
//     enqueue(element) {
//         this.elements.push(element);
//         return this;
//     }
//     dequeue() {
//         if (this.isEmpty) return null;
//         return this.elements.shift();
//     }
//     get length() {
//         return this.elements.length;
//     }
//     get isEmpty() {
//         return this.elements.length === 0;
//     }
//     peek() {
//         if (this.isEmpty) return null;
//         return this.elements[0];
//     }
//     getLast() {
//         if (this.isEmpty) return null;
//         return this.elements[this.length - 1];
//     }
//     print() {
//         for (let i = 0; i < this.length; i++)
//             console.log(this.elements[i]);
//     }
//     clear() {
//         this.elements.length = 0;
//         return true;
//     }
// }

/* 2 */
class Queue {
    #elements;
    #head;
    #tail;
    constructor() {
        this.#elements = {};
        this.#head = 0;
        this.#tail = 0;
    }
    enqueue(element) {
        this.#elements[this.#tail++] = element;
        return this;
    }
    dequeue() {
        if (this.isEmpty) return null;
        const element = this.#elements[this.#head];
        delete this.#elements[this.#head++];
        return element;
    }
    peek() {
        if (this.isEmpty) return null;
        return this.#elements[this.#head];
    }
    getLast() {
        return this.#elements[this.#tail - 1];
    }
    print() {
        for (const element in this.#elements)
            console.log(this.#elements[element]);
    }
    get size() {
        return this.#tail - this.#head;
    }
    get isEmpty() {
        return this.size === 0;
    }
    get storage() {
        if (this.isEmpty) return null;
        return Object.values(this.#elements);
    }
    clear() {
        this.#elements = {};
        this.#tail = 0;
        this.#head = 0;
        return true;
    }
}

let q = new Queue();
console.log(q.size);
console.log(q.isEmpty);
q.enqueue('a').enqueue('b').enqueue('c');
q.enqueue('j');
console.log(q.storage);
q.dequeue()
q.dequeue()
console.log(q.storage);
console.log(q.size);
console.log(q.peek());