class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        int maxSquare = 0;

        for (int r = m - 1; r >= 0; r--) {
            for (int c = n - 1; c >= 0; c--) {
                if (matrix[r][c] == '1') {
                    dp[r][c] = 1 + min({dp[r + 1][c], dp[r][c + 1], dp[r + 1][c + 1]});
                    maxSquare = max(maxSquare, dp[r][c]);
                }
            }
        }

        return maxSquare * maxSquare;
    }
};