1class Solution {
2public:
3    vector<vector<int>> ans;
4    void solve(int start, int k,int n,vector<int> path){
5        if (k == 0) {
6            if (n == 0){
7                ans.push_back(path);
8                return;
9            } 
10        }
11
12        for (int digit = start; digit <= 9; digit++) {
13            path.push_back(digit);
14            solve(digit + 1, k - 1, n - digit, path);
15            path.pop_back();
16        }
17    }
18    vector<vector<int>> combinationSum3(int k, int n) {
19        vector<int> path;
20        solve(1,k,n,path);
21        return ans;
22    }
23};