/**
 * @param {number} k
 */
var MyCircularQueue = function (k) {
    this.head = -1;
    this.tail = -1;
    this.size = 0;
    this.capacity = Math.max(Number(k), 0) || 10;
    this.list = Array(this.capacity).fill(null);
};

/** 
* @param {number} value
* @return {boolean}
*/
MyCircularQueue.prototype.enQueue = function (value) {
    if (this.isFull()) return false;
    this.tail = (this.tail + 1) % this.capacity;
    this.list[this.tail] = value;
    this.size++;
    if (this.head === -1) this.head = this.tail;
    return true;
};

/**
* @return {boolean}
*/
MyCircularQueue.prototype.deQueue = function () {
    if (this.isEmpty()) return false;
    this.list[this.head] = null;
    this.head = (this.head + 1) % this.capacity;
    this.size--;
    if (this.isEmpty()) {
        this.head = -1;
        this.tail = -1;
    }
    return true;
};

/** 
* @return {number}
*/
MyCircularQueue.prototype.Front = function () {
    if (this.isEmpty()) return -1;
    return this.list[this.head];
};

/**
* @return {number}
*/
MyCircularQueue.prototype.Rear = function () {
    if (this.isEmpty()) return -1;
    return this.list[this.tail];
};

/**
* @return {boolean}
*/
MyCircularQueue.prototype.isEmpty = function () {
    return this.size === 0;
};

/**
* @return {boolean}
*/
MyCircularQueue.prototype.isFull = function () {
    return this.size === this.capacity;
};

// let q = new MyCircularQueue(6);
// console.log(q.enQueue(6));
// console.log(q.Rear());
// console.log(q.Rear());
// console.log(q.deQueue());
// console.log(q.enQueue(5));
// console.log(q.Rear());
// console.log(q.deQueue());
// console.log(`--------------`);
// console.log(q.Front());
// console.log(q.deQueue());
// console.log(q.deQueue());
// console.log(q.deQueue());
let q = new MyCircularQueue(3);
console.log(q.enQueue(7));
console.log(q.deQueue());
console.log(q.Front());
console.log(q.deQueue());
console.log(q.Front());
console.log(q.Rear());
console.log(q.enQueue(0));
console.log(q.isFull());
console.log(q.deQueue());
console.log(q.Rear());
console.log(q.enQueue());
console.log(`--------------`);
return;
