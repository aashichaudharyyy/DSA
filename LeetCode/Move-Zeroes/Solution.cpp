1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int pointer1 = 0;
5        int pointer2 = 0;
6        while(pointer1 < nums.size()){
7            if(nums[pointer1] != 0){
8                nums[pointer2] = nums[pointer1];
9                pointer2++;
10            }
11            pointer1++;
12        }
13
14        for(int i=pointer2;i<nums.size();i++){
15            nums[i] = 0;
16        }
17    }
18};