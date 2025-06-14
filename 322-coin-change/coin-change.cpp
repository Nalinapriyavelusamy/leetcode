class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1); // Initialize with max
        dp[0] = 0; // Base case: 0 coins to make amount 0

        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                int coin = coins[j];
                if (i - coin >= 0) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        return dp[amount] > amount ? -1 : dp[amount];
    }
};
