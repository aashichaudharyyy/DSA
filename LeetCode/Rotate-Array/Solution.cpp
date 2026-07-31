1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        k%=nums.size();
5        reverse(nums.begin(), nums.end());
6        reverse(nums.begin(), nums.begin() + k);
7        reverse(nums.begin() + k, nums.end()); 
8    }
9};