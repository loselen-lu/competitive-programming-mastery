# Problem 8: Missing Number

* **Link:** [CSES - Missing Number](https://cses.fi/problemset/task/1083)
* **Topic:** Array, Math
* **Difficulty:** Easy

## My Approach

1. The array has `n - 1` numbers from `1` to `n`.
2. Compute the expected sum using the formula: `n(n + 1) / 2`.
3. Subtract the actual sum of input numbers to find the missing one.

## Complexity

* **Time:** O(n) — summing the input.
* **Space:** O(n) — storing the input array.

## Key Takeaways

* Instead of checking each number from 1 to n, use the mathematical formula `n(n+1)/2` to find the expected sum, then subtract the actual sum to find the missing number.
* Be careful with integer overflow—ensure at least one operand is `long long` (e.g., `1LL * n * (n + 1) / 2`) so the result is computed in 64-bit before assignment.