/* 1 */
// class Stack {
//     constructor(...elements) {
//         this.elements = [...elements];
//     }

//     push(element) {
//         this.elements.push(element);
//         return this;
//     }

//     pop() {
//         if (this.isEmpty) return null;
//         return this.elements.pop();
//     }

//     peek() {
//         if (this.isEmpty) return null;
//         return this.elements[this.length - 1];;
//     };

//     clear() {
//         this.elements.length = 0;
//         return true;
//     }

//     search(element) {
//         for (let i = 0; i < this.length; i++)
//             if (this.elements[i] === element) return i;
//         return -1;
//     }

//     print() {
//         for (let i = 0; i < this.length; i++)
//             console.log(this.elements[i]);
//     }
//     get length() { return this.elements.length; }
//     get isEmpty() { return this.length === 0; }
// }

/* 2 */
class Stack{
    #elements;
    #size;
    constructor(){
        this.#elements = {};
        this.#size = 0;
    }
    push(element){
        this.#elements[this.#size++] = element;
        return this;
    }
    pop(){
        if (this.isEmpty) return null;
        const element = this.#elements[this.#size--];
        delete this.#elements[this.#size];
        return element;
    }
    peek(){
        if(this.isEmpty) return null;
        return this.#elements[this.#size - 1]
    }
    get size(){
        return this.#size
    }
    get isEmpty(){
        return this.#size === 0;
    }
}

let stack = new Stack();
stack.push('a').push('b').push('c');
console.log(stack.peek())
stack.pop();
stack.pop();
console.log(stack.peek())
console.log(stack.size)