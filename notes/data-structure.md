# data structure fundamentals

## Data Structures

### What is a data structure

a data structure can be defined as any of the following:-

- an organized data + operations over them
- a collection of data values + their relationships + functions applied on them
- a class with a data and memeber functions
- an implementation of an Abstract data type
- an ADT implementation that is defined as a "class of objects whose logical behavior is defined by a set of values and a set of operations"

### Types of data structures in terms of the structure

#### Linear
 - every element has at most two elements
  - a successor
  - a predecessor
 - every element may have
  - both a successor and a predecessor
  - a successor only
  - a predecessor only
  - neither successor nor predecessor

#### Non-linear 
- every element may have
  - successors and predecessors
  - successors only
  - predecessors only
  - neither successors nor predecessors

### Types of data structures in terms of the ability to shrink and extend

#### Static
> allocate at compile time
>

- fast at reading/accessing
- slow at deleting and inserting

#### Dynamic
> allocate at run time
>

- fast at deleting and inserting
- slow at reading/accessing

### Examples of data structures

- array
- vector
- stack
- queue
- dictionary | map | hash table | hash map
- heaps
    - min
    - max
- linked list
    - single
    - double
    - circular
- trees
    - binary tree
    - binary search tree
    - balanced
    - complete
    - suffix
- graph === networks
    - directed
    - undirected
- set | hash set // not recommended/popular
- tries // not recommended/popular
- union-find // not recommended/popular
- deque // not recommended/popular


### Why do we need data structures?

- every program no matter its size saves data in some way or another and we need a specifc data structure that fits every use case the best
- 

### Why to study data structures if there are built-in ones already

- using built-in data structure as a black box without understanding their details is a big risk in real projects
    - you won't realize the time/memory order
    - you will use them improperly as you don't recognize their differences
- you may need to design your own data structure
- to improve your thinking skills

### How to create/implement a data structure


An ADT may be implemented by specific data types or data structures, in many ways and in many programming languages; or described in a formal specification language.

ADTs are often implemented as modules: the module's interface declares procedures that correspond to the ADT operations, sometimes with comments that describe the constraints.

This information hiding strategy allows the implementation of the module to be changed without disturbing the client programs.

- using classes

### What is the difference between a data structure and a class since the first is a class also

a normal class is centered around functionalities and a data structure is centered around data

---

## What is Root Cause Analysis (RCA)

the process of discovering the root causes of a problem in order to identify appropriate solutions

---

## What is Capacity trick
> it is about being slow once in every too many steps instead of being slow in every step
>

e.g: if we have reserved a vector with length 10 and it's filled then we will double the length and so on and so forth

--- 

## What are the differnt types of data types

1. Primitive data type
    e.g: float, int
2. User-Defined data type
    e.g: a vector we implemented
3. Abstract data type
    - a theoritical concept, more like logical/mathematical view by which we specify the what part and also potentially the expected performance
    - we focus on the what
    - we don't care about how(not specified yet)
    - there's only one what but many hows

---

## ADTs

### What is an Abstract data type

- An abstract data type (ADT) is a mathematical model for data types.
- An abstract data type is defined by its behavior (semantics) from the point of view of a user, of the data, specifically in terms of possible values, possible operations on data of this type, and the behavior of these operations.
- This mathematical model contrasts with data structures, which are concrete representations of data, and are the point of view of an implementer, not a user.
- ADTs are a theoretical concept, in computer science, used in the design and analysis of algorithms, data structures, and software systems, and do not correspond to specific features of computer languages—mainstream computer languages do not directly support formally specified ADTs.
- A generalized approach of a number of algebraic structures, such as lattices, groups, and rings.
- A mathematical model of the data objects that make up a data type as well as the functions that operate on these objects.

### What is the usage of ADTs

- Abstract data types are purely theoretical entities, used (among other things) to 
    - simplify the description of abstract algorithms
    - classify and evaluate data structures
    - formally describe the type systems of programming languages
- Abstraction provides a promise that any implementation of the ADT has certain properties and abilities; knowing these is all that is required to make use of an ADT object.

- Encapsulation
Abstraction provides a promise that any implementation of the ADT has certain properties and abilities; knowing these is all that is required to make use of an ADT object.

- Localization of change
Code that uses an ADT object will not need to be edited if the implementation of the ADT is changed. Since any changes to the implementation must still comply with the interface, and since code using an ADT object may only refer to properties and abilities specified in the interface, changes may be made to the implementation without requiring any changes in code where the ADT is used.

- Flexibility
Different implementations of the ADT, having all the same properties and abilities, are equivalent and may be used somewhat interchangeably in code that uses the ADT. This gives a great deal of flexibility when using ADT objects in different situations. For example, different implementations of the ADT may be more efficient in different situations; it is possible to use each in the situation where they are preferable, thus increasing overall efficiency.

### Examples of ADTs

- Integers are an ADT, defined as the values ..., −2, −1, 0, 1, 2, ..., and by the operations of addition, subtraction, multiplication, and division, together with greater than, less than, etc.
- Arrays in many scripting languages, such as Awk, Lua, and Perl, which can be regarded as an implementation of the abstract list. 
- Collection
- Container
- List
- String
- Set
- Multiset
- Map
- Multimap
- Graph
- Tree
- Stack
- Queue
- Priority queue
- Double-ended queue
- Double-ended priority queue


### What are the Conventions for defining the ADTs

There are no standard conventions for defining them.

---

## Notes

- a data structure is very centered around to provide specific functionality
- data structures are mainly about data. specific functionalities are driven to serve the data purpose
- every data structure arranges and stores data in a specific way to support a specifc use case
- what is this
- from a purpose to another, we may arrange the same data in differnt ways
- there are many ways to implement a data structure
- data structures are concrete, the are implementing the ADT
- abstraction means hiding the unwanted details while showing the most essential in a given context
- An ADT consists not only of operations but also of a domain of values and of constraints on the defined operations.
- An "interface" typically refers only to the operations, and perhaps some of the constraints on the operations, such as pre-conditions and post-conditions; but not to other constraints, such as relations between the operations.
- The notion of abstract data types is related to the concept of data abstraction.
- Each of ADTs may be defined in many ways and variants, not necessarily equivalent. For example, an abstract stack may or may not have a count operation that tells how many items have been pushed and not yet popped. This choice makes a difference not only for its clients but also for the implementation.


---

## Resources
- [ADT](https://en.wikipedia.org/wiki/Algebraic_structure)
