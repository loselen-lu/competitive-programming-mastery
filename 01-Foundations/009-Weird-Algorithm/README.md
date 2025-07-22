# Problem 9: Weird Algorithm

* **Link:** [CSES - Weird Algorithm](https://cses.fi/problemset/task/1068)
* **Topic:** Math, Loop
* **Difficulty:** Easy

## My Approach

1. Use a `long long` variable (`cur_num`) to avoid overflow.
2. While `cur_num` is not 1, apply the rules: if even, divide by 2; if odd, multiply by 3 and add 1.
3. When `cur_num` becomes 1, print it.

## Complexity

* **Time Complexity:** O(k) – where `k` is the number of steps until the value reaches 1.
* **Space Complexity:** O(1) – uses only a single variable.

## Key Takeaways

* This is an implementation of the Collatz conjecture, which asserts that this process always reaches 1.
* The number of steps `k` is not known to be predictable for arbitrary `n`.
* Use `long long` to prevent overflow from large values during computation.