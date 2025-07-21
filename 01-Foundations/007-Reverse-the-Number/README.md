# Problem 7: Reverse the Number

* **Link:** [CodeChef - FLOW007](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007)
* **Topic:** Basic String Manipulation
* **Difficulty:** Easy

## My Approach

1. Convert each input integer to a string.
2. Reverse the string manually.
3. Remove leading zeros by converting the reversed string to an integer, then back to a string.
4. Store each result in a vector of strings.

## Complexity

* **Time Complexity:** O(n) — each operation on a number has constant time due to fixed digit length.
* **Space Complexity:** O(n) — storing n strings as the final result.

## Key Takeaways

* To remove leading zeros, you can convert the string to an integer (which removes them), then back to a string.
* Manual reversal gives fine control, but `reverse()` from `<algorithm>` is a simpler alternative.
