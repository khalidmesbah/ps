- if you're searching for a name in an array of names using binary search, and you keep adding names to the array, each time you add a name the array is re-sorted so that binary search could work. How to avoid this re-sorting? Is there a better data structure? how to put the name into the right slot in the array right away to avoid re-sorting?
> the solution is to use the binary search tree

![[Pasted image 20250401165444.png]]

## downsides
- slower than arrays at searching in the worst case
- no random access

## types of binary search trees
- balanced
- imbalanced
## red-black tree
- it is one of the special binary search trees that balance themselves.

##  B-trees
 - a special type of binary tree, are commonly used to store data in databases.