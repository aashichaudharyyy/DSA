1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int pointer1 = 1;
5        int pointer2 = 1;
6        while(pointer2 < nums.size()){
7            if(nums[pointer2] != nums[pointer2 - 1]){
8                nums[pointer1] = nums[pointer2];
9                pointer1++;
10            };
11            pointer2++;
12        };
13        return pointer1;
14    };
15};