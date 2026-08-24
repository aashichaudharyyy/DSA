1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int x = nums.size();
5        for(int i = 0; i < nums.size(); i++){
6            x ^= i;
7            x ^= nums[i];
8        }
9        return x;
10    }
11};