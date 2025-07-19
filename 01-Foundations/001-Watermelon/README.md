# Problem 1: Watermelon

* **Link:** [https://codeforces.com/contest/4/problem/A](https://codeforces.com/contest/4/problem/A)
* **Topic:** Basic Math, Logic
* **Difficulty:** Easy

## My Approach

The main idea is:

1. When the watermelon weighs more than 0 after subtracting 2 kilos, then it can possibly be divided.
2. If the result of that subtraction is divisible by 2, then the result is even (the other 2 kilos are already even).

So, `weight - 2 > 0` and `weight - 2 ≡ 0 (mod 2)`.

## Complexity

* **Time Complexity:** O(1) – it only checks the two conditions described above.
* **Space Complexity:** O(1) – no memory usage changes based on input.

## Key Learnings

* This problem cannot be solved by checking divisibility by 4, since 6 kilos is valid: 4 and 2 kilos (even though 6 isn't divisible by 4).
