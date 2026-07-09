1//hash-map approach 
2
3class Solution {
4public:
5    vector<int> twoSum(vector<int>& nums, int target) {
6        unordered_map<int, int> hashMap;
7        for (int i=0;i<nums.size();i++){
8            hashMap[nums[i]] = i;
9        }
10
11        for (int i=0;i<nums.size();i++){
12            int comp = target - nums[i];
13            if (hashMap.find(comp) != hashMap.end() && hashMap[comp] != i)
14                return {i,hashMap[comp]};
15        };
16        return {};
17    };
18};
