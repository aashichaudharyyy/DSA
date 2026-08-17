1class Solution {
2public:
3    int climbStairs(int n, unordered_map<int, int>& memo) {
4        if (n == 0 || n == 1) {
5            return 1;
6        }
7        if (memo.find(n) == memo.end()) {
8            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
9        }
10        return memo[n];
11    }
12
13    int climbStairs(int n) {
14        unordered_map<int, int> memo;
15        return climbStairs(n, memo);
16    }
17};