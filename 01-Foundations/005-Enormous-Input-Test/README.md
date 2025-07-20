# Problem 5: Enormous Input Test

* **Link:** [https://www.spoj.com/problems/INTEST](https://www.spoj.com/problems/INTEST)
* **Topic:** Fast IO
* **Difficulty:** Easy

## My Approach

1. I use two I/O optimizers for competitive programming in C++: `ios::sync_with_stdio(false)` and `cin.tie(nullptr)`.
2. For the solution, I count how many of the `n` integers are divisible by `k` using `n % k == 0`.

## Complexity

* **Time Complexity:** O(n) – it checks all inputs one by one.
* **Space Complexity:** O(n) – it stores all the inputs in a vector.

## Key Takeaways

* Without I/O optimizers, my submission took 1.63s; after adding them, it became 0.43s.
* The compiler (g++ version 4.3.2) does not support C++11, so it can't use range-based for loops like `for (int i : nums)`.
