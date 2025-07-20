# Problem 4: Team

* **Link:** [https://codeforces.com/problemset/problem/231/A](https://codeforces.com/problemset/problem/231/A)
* **Topic:** Control Flow, Array
* **Difficulty:** Easy

## My Approach

1. I store the opinions of all three people for each problem in a 2D vector of size `problems × 3`.
2. I declare a variable `res` to keep track of the final result.
3. For each problem, I check if the number of people sure about the solution is greater than or equal to 2, then increase `res` by 1.

## Complexity

* **Time Complexity:** O(n × 3) → simplified to O(n) – iterate over each problem and 3 entries.
* **Space Complexity:** O(n × 3) → O(n) – store all inputs.

## Key Takeaways

* `vector<bool>` stores `bit_reference`, which doesn't support `>>`, so it can't be used with `cin` like usual.
