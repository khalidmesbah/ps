- problems that have no fast algorithmic solution
- it's hard to solve them quickly, so use an approximation algo instead
- to solve them, you calculate every possible solution and pick the smallest/shortest one
- You know how to calculate the shortest way to get from point A to point B. NP-complete problems But if you want to find the shortest path that connects several points, that’s the traveling-salesperson problem, which is NP-complete 
- there’s no easy way to tell if the problem you’re working on is NP-complete. But there are some suggestions.
- NP-complete problems have no known fast solution. If you have an NP-complete problem, your best bet is to use an approximation algorithm.
## examples
- [[set-covering problem]]
- [[knapsack problem]]
- [[traveling-salesperson problem]]

## is NP-complete problem
1. Your algorithm slows down with more items.
2. The algo contains “All combinations of X” 
3. If your problem involves a sequence (such as a sequence of cities, like traveling salesperson), and it’s hard to solve, it might be NP-complete. 
4. If your problem involves a set (like a set of radio stations) and it’s hard to solve, it might be NP-complete. 
5. Can you restate your problem as the set-covering problem or the traveling-salesperson problem? Then your problem is definitely NP-complete. 