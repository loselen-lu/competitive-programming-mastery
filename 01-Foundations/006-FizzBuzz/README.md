# Problem 6: FizzBuzz

* **Link:** [https://leetcode.com/problems/fizz-buzz](https://leetcode.com/problems/fizz-buzz)
* **Topic:** Basic String Manipulation, Basic Number Theory
* **Difficulty:** Easy

## My Approach

1. For each number from 1 to n, declare a string `cur` to build the result.
2. If divisible by 3, append `"Fizz"` to `cur`.
3. If divisible by 5, append `"Buzz"` to `cur`.
4. If not divisible by either, set `cur` to the number itself as a string.
5. Append `cur` to the result list.

## Complexity

* **Time Complexity:** O(n) — iterate once through numbers 1 to n.
* **Space Complexity:** O(n) — stores n strings in the result.

## Key Takeaways

* There are multiple valid ways to solve this. For example, explicitly checking all 4 cases (divisible by 3, 5, both, or neither) works too.
