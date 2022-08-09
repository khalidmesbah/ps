class CircularQueue {
    #elements;
    #head;
    #tail;
    #maxSize;
    constructor(size) {
        this.#elements = {};
        this.#head = -1;
        this.#tail = -1;
        this.#maxSize = size;
    }
    enqueue(element) {
        if (this.isFull) return false;
        this.#tail = (this.#tail + 1) % this.#maxSize;
        this.#elements[this.#tail] = element;
        if (this.#head === -1) this.#head = this.#tail;
        return true;
    }
    dequeue() {
        if (this.isEmpty) return null;
        const element = this.#elements[this.#head];
        this.#head = (this.#head + 1) % this.#maxSize;
        delete this.#elements[this.#head];
        if (this.isEmpty) {
            this.#tail = -1;
            this.#head = -1;
        }
        return element;
    }
    front() {
        if (this.isEmpty) return null;
        return this.#elements[this.#head];
    }
    rear() {
        if (this.isEmpty) return null;
        return this.#elements[this.#tail];
    }
    print() {
        if (this.isEmpty) return false;
        for (const element in this.#elements)
            console.log(this.#elements[element]);
    }
    get size() {
        return this.#tail - this.#head;
    }
    get isEmpty() {
        if (this.#tail !== -1 && this.#head !== -1 && this.#tail === this.#head) return false;
        return this.size === 0;
    }
    get isFull() {
        if (this.isEmpty) return false;
        return this.#head === this.#tail;
    }
    get storage() {
        if (this.isEmpty) return null;
        return Object.values(this.#elements);
    }
    clear() {
        this.#elements = {};
        this.#tail = -1;
        this.#head = -1;
        return true;
    }
    get head() {
        return this.#head;
    }
    get tail() {
        return this.#tail;
    }
}
const q = new CircularQueue(5);
q.enqueue(10);
q.enqueue(20);
q.dequeue();
console.log(q.front());
console.log(q.head, q.tail);
// console.log(q.isFull);
/*
let q = new CircularQueue(6);
console.log(q.enqueue(6));
console.log(q.rear());
console.log(q.rear());
console.log(q.dequeue());
console.log(q.enqueue(5));
console.log(q.rear());
console.log(q.dequeue());
console.log(`--------------`);
console.log(q.front());
console.log(q.dequeue());
console.log(q.dequeue());
console.log(q.dequeue()); */