class Queue {
    #elements;
    #head;
    #tail;
    constructor() {
        this.#elements = [];
        this.#head = 0;
        this.#tail = 0;
    }
    enqueue(element) {
        if (this.size === 0) {
            this.#elements[this.#tail++] = element;
            return this;
        }
        for (let i = 0; i < this.size; i++) {
            if (element[1] >= this.#elements[i][1]) {
                this.#elements.splice(i, 0, element);
                break;
            } else {
                this.#elements[this.#tail++] = element;
                return this;
            }
        }
        this.#tail++;
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
        console.log(Object.values(this.#elements));
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
        this.#elements = [];
        this.#tail = 0;
        this.#head = 0;
        return true;
    }
}

let q = new Queue();
q.enqueue(['a', 100000]);
q.enqueue(['b', 10000]);
q.enqueue(['s', 1]);
q.enqueue(['c', 2]);
q.enqueue(['f', 5]);
q.enqueue(['f', 5]);
q.enqueue(['f', 9]);
q.print();