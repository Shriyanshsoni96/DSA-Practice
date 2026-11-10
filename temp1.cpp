class Solution {
public:
    int solve(int i, vector<int>& costs, vector<int>& dp, int n) {

        if (i == n)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int ans = INT_MAX;

        for (int jump = 1; jump <= 3; jump++) {

            int j = i + jump;

            if (j <= n) {
                int currentCost = costs[j - 1] + jump * jump;

                int totalCost = currentCost +
                                solve(j, costs, dp, n);

                ans = min(ans, totalCost);
            }
        }

        return dp[i] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, -1);

        return solve(0, costs, dp, n);
    }
};