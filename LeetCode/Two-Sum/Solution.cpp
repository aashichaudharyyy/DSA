1//hash-map approach - one pass approach - best solution
2
3class Solution {
4public:
5    vector<int> twoSum(vector<int>& nums, int target) {
6        unordered_map<int, int> hashMap;
7
8        for (int i=0;i<nums.size();i++){
9            int comp = target - nums[i];
10            if (hashMap.find(comp) != hashMap.end() && hashMap[comp] != i)
11                return {i,hashMap[comp]};
12            hashMap[nums[i]] = i;
13        };
14        return {};
15    };
16};
