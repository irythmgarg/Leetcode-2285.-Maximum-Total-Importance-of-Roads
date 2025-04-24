// Problem: Given a set of roads between cities, assign importance values to cities
// such that the total importance of all roads is maximized. Importance of a road
// is defined as the sum of importance values of the cities it connects.

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        // Step 1: Count the number of roads connected to each city (i.e., degree)
        vector<int> degree(n, 0);
        for (auto road : roads) {
            int from = road[0];
            int to = road[1];
            degree[from]++;
            degree[to]++;
        }

        // Step 2: Sort cities by their degree (low to high)
        sort(degree.begin(), degree.end());

        // Step 3: Assign increasing importance values to cities with lower degree first
        // Cities with higher degree get higher importance
        int importance = 1;
        long long totalImportance = 0;
        for (int i = 0; i < n; i++) {
            totalImportance += 1LL * importance * degree[i];
            importance++;
        }

        // Return the total importance of all roads
        return totalImportance;
    }
};
