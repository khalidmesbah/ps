/**
 * @param {number} k
 */
var MyCircularQueue = function (k) {
    this.elements = {};
    this.head = 0;
    this.tail = 0;
    this.maxSize = k;
};

/** 
* @param {number} value
* @return {boolean}
*/
MyCircularQueue.prototype.enQueue = function (value) {
    if (this.isFull()) return false;
    this.elements[this.tail++] = value;
    return true;
};

/**
* @return {boolean}
*/
MyCircularQueue.prototype.deQueue = function () {
    if (this.isEmpty()) return null;
    delete this.elements[this.head++];
    return true;
};

/**
* @return {number}
*/
MyCircularQueue.prototype.Front = function () {
    if (this.isEmpty()) return null;
    if (this.isFull()) return - 1;  
    console.log(this)
    return this.elements[this.head];
};

/**
* @return {number}
*/
MyCircularQueue.prototype.Rear = function () {
    if (this.isEmpty()) return null;
    return this.elements[this.tail - 1];
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
    return (this.tail - this.head) === this.maxSize;
};

let q = new MyCircularQueue(6);
console.log(q.enQueue(6));
console.log(q.Rear());
console.log(q.Rear());
console.log(q.deQueue());
console.log(q.enQueue(5));
console.log(q.Rear());
console.log(q.deQueue());
console.log(`--------------`);
console.log(q.Front());
// console.log(q.deQueue());
// console.log(q.deQueue());
// console.log(q.deQueue());