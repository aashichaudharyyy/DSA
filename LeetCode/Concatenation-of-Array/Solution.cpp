1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans(2*nums.size());
5
6        for(int i=0;i<nums.size();i++){
7            ans[i] = nums[i];
8            ans[i+nums.size()] = nums[i];
9        };
10        return ans;
11    };
12};