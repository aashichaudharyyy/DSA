1class Solution {
2public:
3    int maxCoins(vector<int>& nums) {
4        int n = nums.size();
5        // Add virtual balloons with value 1
6        nums.insert(nums.begin(), 1);
7        nums.push_back(1);
8        // dp[l][r] = max coins from bursting l...r
9        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
10        // Length of the interval
11        for(int len = 1; len <= n; len++) {
12            for(int l = 1; l + len - 1 <= n; l++) {
13                int r = l + len - 1;
14                // Try every balloon as the LAST balloon
15                for(int k = l; k <= r; k++) {
16                    int coins =
17                        dp[l][k - 1]
18                        + dp[k + 1][r]
19                        + nums[l - 1] * nums[k] * nums[r + 1];
20                    dp[l][r] = max(dp[l][r], coins);
21                }
22            }
23        }
24        return dp[1][n];
25    }
26};