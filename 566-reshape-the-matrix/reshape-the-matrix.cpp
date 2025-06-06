class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> result(r, vector<int>(c));
         int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int newRow = count/c;
                int newCol = count%c;
                result[newRow][newCol] = mat[i][j];
               count ++;
            }
        }

        return result;
    }
};
