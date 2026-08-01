1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int pointer1 = 0;
5        int pointer2 = 0;
6        while(pointer1 < nums.size()){
7            if(nums[pointer1] != val){
8                nums[pointer2] = nums[pointer1];
9                pointer2++;
10            }
11            pointer1++;
12        }
13
14        return pointer2;
15    }
16};