class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n + 1,
                               vector<int>(m + 1, 0));

        // Last column
        for (int i = n - 1; i >= 0; i--) {

            dp[i][m] =
                dp[i + 1][m] + (int)s1[i];
        }

        // Last row
        for (int j = m - 1; j >= 0; j--) {

            dp[n][j] =
                dp[n][j + 1] + (int)s2[j];
        }

        // Fill table
        for (int i = n - 1; i >= 0; i--) {

            for (int j = m - 1; j >= 0; j--) {

                if (s1[i] == s2[j]) {

                    dp[i][j] =
                        dp[i + 1][j + 1];
                }
                else {

                    int deleteS1 =
                        (int)s1[i] +
                        dp[i + 1][j];

                    int deleteS2 =
                        (int)s2[j] +
                        dp[i][j + 1];

                    dp[i][j] =
                        min(deleteS1,
                            deleteS2);
                }
            }
        }

        return dp[0][0];
    }
};