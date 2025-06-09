class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2));
        for (int i = 0; i <= n - 3; ++i)
            for (int j = 0; j <= n - 3; ++j) {
                int localMax = 0;
                for (int r = i; r < i + 3; ++r)
                    for (int c = j; c < j + 3; ++c)
                        localMax = max(localMax, grid[r][c]);
                maxLocal[i][j] = localMax;
            }
        return maxLocal;
    }
};