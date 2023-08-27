class CircularQueue {
    #list;
    #capacity;
    #tail = -1;
    #head = -1;
    #size = 0;
    constructor(capacity) {
        this.#capacity = Math.max(Number(capacity), 0) || 10;
        this.#list = Array(this.#capacity).fill(null);
    }
    get size() {
        return this.#size;
    }
    get isFull() {
        return this.size === this.#capacity;
    }
    get isEmpty() {
        return this.size === 0;
    }
    enQueue(item) {
        if (this.isFull) return null;
        this.#tail = (this.#tail + 1) % this.#capacity;
        this.#list[this.#tail] = item;
        this.#size++;
        if (this.#head === -1) this.#head = this.#tail;
        return this.size;
    }
    deQueue() {
        if (this.isEmpty) return -1;
        const item = this.#list[this.#head];
        this.#list[this.#head] = null;
        this.#head = (this.#head + 1) % this.#capacity;
        this.#size--;
        if (this.isEmpty) {
            this.#head = -1;
            this.#tail = -1;
        }
        return item;
    }
    Rear() {
        return this.#list[this.#tail];
    }
    Front() {
        return this.#list[this.#head] || false;
    }
    print() {
        console.log(this.#list);
    }
}
let q = new CircularQueue(6);
console.log(q.enQueue(6));
console.log(q.Rear());
console.log(q.Rear());
console.log(q.deQueue());
console.log(q.enQueue(5));
console.log(q.Rear());
console.log(q.deQueue());
console.log(`--------------`);
console.log(q.Front());
console.log(q.deQueue());
console.log(q.deQueue());
console.log(q.deQueue());