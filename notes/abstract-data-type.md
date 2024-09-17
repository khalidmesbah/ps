# Abstract Data Type

## What is an Abstract Data Type?

An abstract data type (ADT) is like a blueprint for a data structure. It describes what you can do with the data, but not how it's actually stored in memory. It's like a recipe for a cake: it tells you what ingredients to use and how to bake it, but it doesn't tell you what kind of pan to use or how long to bake it.

Think of it this way: you use a bank account every day. You know you can deposit money, withdraw money, check your balance, and so on. But you don't know (and don't need to know) how the bank actually stores your money. That's the bank's internal implementation.

Here's the key:

- **Abstraction:** ADTs hide the underlying implementation details. You only interact with them through a set of well-defined operations.
- **Focus on Behavior:** They define what the data structure _does_, not how it _works_.

## **Example: A Stack**

Imagine a stack of plates. You can only add a plate to the top, or remove a plate from the top. You can't reach into the middle of the stack. That's the behavior of a stack ADT.

Here's how it's defined:

- **Data:** A collection of elements.
- **Operations:**
  - `push(element)`: Adds an element to the top.
  - `pop()`: Removes and returns the top element.
  - `peek()`: Returns the top element without removing it.
  - `isEmpty()`: Checks if the stack is empty.

## **Why are ADTs important?**

- **Simplicity:** They make code easier to understand and maintain. You don't have to worry about how the data is stored, just what you can do with it.
- **Flexibility:** You can easily change the underlying implementation without affecting the code that uses the ADT.
- **Reusability:** ADTs can be reused in different parts of your program, or even in different programs.

## **Summary**

**In a nutshell, ADTs are about separating what a data structure _does_ from how it _works_. This makes your code more modular, maintainable, and reusable.**

## **Notes**

- data structures are concrete, they implement the abstract data type
- ADTs are like blueprints for data structures
-
