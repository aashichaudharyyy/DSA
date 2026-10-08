1class Solution {
2public:
3    vector<vector<int>> ans;
4    void solve(vector<int>& arr, int i, int target, vector<int> comb){
5        if(target==0){
6            if(find(ans.begin(), ans.end(), comb) == ans.end()) ans.push_back(comb);
7            return;
8        }
9        if(i>=arr.size() || target<0) return;
10
11        comb.push_back(arr[i]);
12        //include once
13        solve(arr, i+1, target-arr[i], comb);
14        //include multiple
15        solve(arr, i, target-arr[i], comb);
16        //exclude
17        comb.pop_back();
18        solve(arr, i+1, target, comb);
19    }
20    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
21        vector<int> comb;
22        solve(candidates, 0, target,comb);
23        return ans;
24    }
25};