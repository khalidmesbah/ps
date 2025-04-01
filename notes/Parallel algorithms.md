## what are parallel aglos
- algos that utilize the cores of the computer to run faster (run parallel across multiple cores) 
- computers ship with multiple cores. To make your algorithms faster, you need to change them to run in parallel across multiple the cores at once!
---
- Parallel algorithms are hard to design. And it’s also hard to make sure they work correctly and to figure out what type of speed boost you’ll see.
- If you’re interested in the theoretical side of performance and scalability, parallel algorithms might be for you!
---
## limitations
the time gains aren’t linear. So if you have two cores in your laptop instead of one, that almost never means your algorithm will magically run twice as fast. There are a couple of reasons for this:

---
### Overhead of managing the parallelism
suppose you have to sort an array of 1,000 items. How do you divide this task among the two cores? Do you give each core 500 items to sort and then merge the two sorted arrays into one big sorted array? Merging the two arrays takes time.

---
### Load balancing
suppose you have 10 tasks to do, so you give each core 5 tasks. But core A gets all the easy tasks, so it’s done in 10 seconds, whereas core B gets all the hard tasks, so it takes a minute. That means core A was sitting idle for 50 seconds while core B was doing all the work! How do you distribute the work evenly so both cores are working equally hard?

---
## crazy use case
The best you can do with a sorting algorithm is roughly O(n log n). It’s well known that you can’t sort an array in O(n) time—unless you use a parallel algorithm! There’s a parallel version of quicksort that will sort an array in O(n) time.

---
## distributed algorithm
- a special type of parallel algorithm that is becoming increasingly popular
- It’s fine to run a parallel algorithm on your laptop if you need two to four cores, but what if you need hundreds of cores? Then you can write your algorithm to run across multiple machines.
- The MapReduce algorithm is a popular distributed algorithm. You can use it through the popular open source tool Apache Hadoop.