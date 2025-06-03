class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Total elements check
        if (original.size() != m * n)
            return {};  // Not possible, return empty 2D array

        vector<vector<int>> result;

        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                // Calculate the index in original array
                row.push_back(original[i * n + j]);
            }
            result.push_back(row);
        }

        return result;
    }
};
