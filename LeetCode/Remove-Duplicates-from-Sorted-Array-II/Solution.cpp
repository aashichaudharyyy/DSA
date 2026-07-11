1//if k duplicates are allowed then pointer1 & pointer2 = k & compare pointer 2 with pointer1 - k
2
3class Solution {
4public:
5    int removeDuplicates(vector<int>& nums) {
6        if(nums.size() < 2)
7            return nums.size();
8
9        int pointer1 = 2;
10        int pointer2 = 2;
11        while(pointer2 < nums.size()){
12            if(nums[pointer2] != nums[pointer1 - 2]){
13                nums[pointer1] = nums[pointer2];
14                pointer1++;
15            };
16            pointer2++;
17        };
18        return pointer1;
19    };
20};