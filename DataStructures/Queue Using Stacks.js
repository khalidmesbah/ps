class Stack {
    #elements;
    #size;
    constructor() {
        this.#elements = {};
        this.#size = 0;
    }
    push(element) {
        this.#elements[this.#size++] = element;
        return this;
    }
    pop() {
        if (this.isEmpty) return null;
        const element = this.#elements[--this.#size];
        delete this.#elements[this.#size];
        return element;
    }
    peek() {
        if (this.isEmpty) return null;
        return this.#elements[this.#size - 1];
    }
    get size() {
        return this.#size;
    }
    get isEmpty() {
        return this.#size === 0;
    }
}


var MyQueue = function () {
    this.inputStack = new Stack();
    this.outputStack = new Stack();
};

/** 
* @param {number} x
* @return {void}
*/
MyQueue.prototype.push = function (x) {
    this.inputStack.push(x);
    return this;
};

/**
* @return {number}
*/
MyQueue.prototype.pop = function () {
    if (this.outputStack.isEmpty) {
        const len = this.inputStack.size;
        for (let i = 0; i < len; i++) {
            this.outputStack.push(this.inputStack.pop());
        }
    }
    return this.outputStack.pop();
};

/**
* @return {number}
*/
MyQueue.prototype.peek = function () {
    if (this.outputStack.isEmpty) {
        const len = this.inputStack.size;
        for (let i = 0; i < len; i++) {
            this.outputStack.push(this.inputStack.pop());
        }
    }
    return this.outputStack.peek();
};

/**
* @return {boolean}
*/
MyQueue.prototype.empty = function () {
    return this.outputStack.isEmpty && this.inputStack.isEmpty;
};
var obj = new MyQueue();
obj.push(1).push(2).push(3).push(4);
obj.push(5);
console.log(obj.pop())
console.log(obj.pop())
console.log(obj.pop())
console.log(obj.pop())
console.log(obj.empty())
console.log(obj.pop())
console.log(obj.empty())