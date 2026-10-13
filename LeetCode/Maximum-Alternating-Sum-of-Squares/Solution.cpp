1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        vector<long long> sq;
5        for (int x : nums) {
6            sq.push_back(1LL * x * x);
7        }
8        sort(sq.begin(), sq.end());
9        int n = sq.size();
10        long long ans = 0;
11
12        for (int i = 0; i < n / 2; i++) {
13            ans -= sq[i];
14        }
15        for (int i = n / 2; i < n; i++) {
16            ans += sq[i];
17        }
18
19        return ans;
20    }
21};