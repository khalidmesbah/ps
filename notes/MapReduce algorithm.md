- there's a special type of [[Parallel algorithms]] called distributed algorithms
- you use these distributed algorithms when you want to run it across 100s of cores (multiple machines)
- It’s fine to run an ordinary parallel algorithm on your laptop if you need two to four cores, but what if you need hundreds of cores? Then you can write your algorithm to run across multiple machines.
- The MapReduce algorithm is a popular distributed algorithm. You can use it through the popular open source tool Apache Hadoop.
- MapReduce is built up from two simple ideas: the map function and the reduce function.
## Why are distributed algorithms useful?
- distributed algorithms are great when you have a lot of work to do and want to speed up the time required to do it.
- Suppose you have a table with billions or trillions of rows, and you want to run a complicated SQL query on it. You can’t run it on MySQL, because it struggles after a few billion rows. Use MapReduce through Hadoop!
- suppose you have to process a long list of jobs. Each job takes 10 seconds to process, and you need to process 1 million jobs like this. If you do this on one machine, it will take you months! If you could run it across 100 machines, you might be done in a few days.
## The map function
it takes an array and a function then applies the function to each item in the array

## The reduce function
you transform an array to a single item.