# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

**Name:** Mohammed Anis M  
**USN / Student ID:** [YOUR USN]  
**College:** REVA University  
**Course:** BTech in Computer Science and Engineering  
**Semester:** 3rd Semester  
**Programming Language:** C

---

## About This Portfolio

This repository contains my solutions for the HackerRank Algorithms and GitHub Coding Portfolio activity.

The portfolio focuses on arrays, counting, sorting, searching, insertion techniques, greedy algorithms, and algorithm complexity analysis.

The solutions are implemented in C with an emphasis on readability, correctness, and efficient algorithmic approaches.

---

## HackerRank Profile

HackerRank Profile:

[PASTE YOUR HACKERRANK PROFILE LINK HERE]

---

## GitHub Repository

Repository:

[PASTE YOUR GITHUB REPOSITORY LINK HERE]

---

# Problems Completed

| No. | Problem | Topic | Time Complexity | Space Complexity |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Arrays / Implementation | O(N) | O(1) |
| 2 | Birthday Cake Candles | Arrays / Counting | O(N) | O(N) |
| 3 | Insertion Sort - Part 1 | Sorting | O(N) | O(1) |
| 4 | Binary Search | Searching | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy / Sorting | O(N log N) | O(N) |

---

# 1. Mini-Max Sum

## Approach

The solution first calculates the total sum of all five numbers.

It then finds the minimum and maximum values.

The minimum possible sum is obtained by subtracting the maximum value from the total sum.

The maximum possible sum is obtained by subtracting the minimum value from the total sum.

## Time Complexity

O(N)

## Auxiliary Space

O(N) because the input array is stored.

## Why This Approach?

It avoids repeatedly calculating different combinations of four elements and performs the required calculation using a single traversal after reading the input.

---

# 2. Birthday Cake Candles

## Approach

The solution traverses the array and keeps track of the largest candle height.

Whenever a new maximum is found, the count is reset to one.

If another candle has the same maximum height, the count is increased.

## Time Complexity

O(N)

## Auxiliary Space

O(N) because the input array is stored.

## Why This Approach?

The maximum height and its frequency can be determined in a single traversal.

---

# 3. Insertion Sort - Part 1

## Approach

The last element is treated as the value that must be inserted into its correct position.

Elements greater than this value are shifted one position to the right.

The value is then inserted into its correct position.

## Time Complexity

O(N) for the single insertion operation.

## Auxiliary Space

O(1)

## Why This Approach?

The algorithm directly demonstrates the shifting operation used in insertion sort.

---

# 4. Binary Search

## Approach

Binary search works on a sorted array.

The middle element is compared with the target.

If the target is larger, the left half is discarded.

If the target is smaller, the right half is discarded.

This process continues until the target is found or the search range becomes empty.

## Time Complexity

O(log N)

## Auxiliary Space

O(1)

## Why This Approach?

Each iteration eliminates approximately half of the remaining search space, making binary search much faster than linear search for sorted data.

---

# 5. Mark and Toys

## Approach

The prices are sorted in ascending order.

The cheapest toys are selected first while the total cost remains within the available budget.

The process stops when the next toy cannot be purchased.

## Time Complexity

O(N log N)

## Auxiliary Space

O(N)

## Why This Approach?

Buying the cheapest available toys first maximizes the number of toys that can be purchased within the budget.

---

# Algorithmic Techniques Learned

Through these problems, I practiced:

- Array traversal
- Minimum and maximum tracking
- Counting
- Insertion operations
- Sorting
- Binary search
- Greedy algorithms
- Big-O complexity analysis

---

# Evidence

Screenshots of accepted HackerRank submissions and the completed Binary Search implementation are included in the activity submission/report.

---

# Reflection

This activity helped me improve my understanding of fundamental algorithmic techniques and their efficiency. I practiced solving problems involving arrays, maximum and minimum tracking, counting, insertion operations, searching, sorting, and greedy selection. One of the important concepts I learned was that solving a problem correctly is not enough; the efficiency of the solution also matters. For example, binary search can reduce the search time to O(log N) when the data is sorted, while sorting-based solutions can require O(N log N) time. I also learned how insertion sort shifts elements to place a value in its correct position. The Mark and Toys problem helped me understand how a greedy strategy can be used to maximize the number of purchases within a fixed budget. Creating the GitHub repository also helped me organize source code and documentation professionally. Overall, this activity improved both my programming problem-solving skills and my ability to analyze algorithms using time and auxiliary space complexity.