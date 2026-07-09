1//brute-force approach
2
3class Solution {
4public:
5    vector<int> twoSum(vector<int>& nums, int target) {
6        for (int i=0;i<nums.size();i++){
7            for (int j=i+1;j<nums.size();j++){
8                if (nums[i]+nums[j] == target)
9                    return {i,j};
10            };
11        };
12        return {};
13    };
14};
