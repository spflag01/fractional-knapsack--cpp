🧩 Problem Description:
Given the profits and weights of N items and a maximum
capacity of the knapsack, this program calculates the
maximum profit achievable by taking fractions of items
when necessary.
🧮 Input Format:
n max_capacity
p1 w1
p2 w2
...
📘 Example:
Input:
3 50

60 10

100 20

120 30

Output:
Max Profit: 240

💡 Approach:
Sort items by profit-to-weight ratio in descending order,
and include as much of each item as possible until the
knapsack is full.
