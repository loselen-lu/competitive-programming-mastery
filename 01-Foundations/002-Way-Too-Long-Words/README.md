# Problem 2: Way Too Long Words

* **Link:** [https://codeforces.com/problemset/problem/71/A](https://codeforces.com/problemset/problem/71/A)
* **Topic:** Basic String Manipulation
* **Difficulty:** Easy

## My Approach

My approach is simple:

1. If the length is greater than 10, I modify it using the first character + (length - 2) + last character.
2. If the length is less than or equal to 10, I just return the original string.

## Complexity

* **Time Complexity:** O(n) – because there are n queries.
* **Space Complexity:** O(n) – because it stores the answers in a vector of length n.

## Key Takeaways

* The method to convert a number to a string in C++11 is using the `std::to_string()` function.
