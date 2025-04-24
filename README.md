# Leetcode-2285.-Maximum-Total-Importance-of-Roads
# Maximum Importance of Roads

This project provides a C++ implementation of an algorithm to maximize the total importance of roads in a city network. Each city is assigned a unique importance value, and the importance of a road is defined as the sum of the importance values of the two cities it connects.

## 🧠 Problem Statement
Given `n` cities and a list of `roads` where each road connects two cities, assign each city a unique importance value from `1` to `n`. The goal is to maximize the sum of importance of all roads.

## ✅ Approach
1. **Count degrees:** Count how many roads are connected to each city.
2. **Sort by degree:** Cities with more roads should have higher importance.
3. **Assign importance:** Assign increasing importance values to cities with lower degrees.
4. **Calculate total importance:** Multiply degree by importance for each city and sum them up.

## 🛠️ Code Structure
- `maximumImportance(int n, vector<vector<int>>& roads)`:
  - Computes degree of each node.
  - Sorts the degree array.
  - Assigns importance values and calculates total.

## 🧪 Example
```cpp
Input:
n = 5
roads = {{0, 1}, {1, 2}, {2, 3}, {0, 3}, {3, 4}}

Output:
Maximum total importance of all roads = 43
```

## 🧰 Requirements
- C++11 or above

## 🚀 How to Run
1. Copy the code into a `.cpp` file.
2. Compile using:
```bash
g++ -std=c++11 filename.cpp -o output
./output
```

## 📚 Topics Covered
- Graph Theory
- Greedy Algorithms
- Sorting
- Degree Calculation in Graphs

## 🙌 Contributions
Feel free to fork and open a pull request to add improvements.

---
Made with ❤️ for algorithm enthusiasts.

