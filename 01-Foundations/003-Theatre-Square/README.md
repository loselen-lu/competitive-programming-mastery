# Problem 3: Theatre Square

* **Link:** [https://codeforces.com/problemset/problem/1/A](https://codeforces.com/problemset/problem/1/A)
* **Topic:** Basic Math, Basic Geometry
* **Difficulty:** Easy

## My Approach

Note that the cover is in the shape of a square:

1. For the two sides, I use ceiling division, because the square tile either exactly covers or slightly overcovers the axis (e.g., a length of 4 can be covered by two 3s).
2. Once the results are found, multiply them to get the total number of tiles along both axes.

## Complexity

* **Time Complexity:** O(1) – only two ceiling divisions and one multiplication.
* **Space Complexity:** O(1) – only one answer is stored; no vectors or arrays.

## Key Takeaways

* The conversion of `int * int` to `long long` can be done by multiplying with `1LL` in front.
