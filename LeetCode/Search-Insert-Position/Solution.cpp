1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left=0;
5        int right=nums.size()-1;
6        int mid;
7        while(left<=right){
8            mid=(left+right)/2;
9            if(nums[mid]==target){
10                return mid;
11            }else if(nums[mid]<target){
12                left=mid+1;
13            }else{
14                right=mid-1;
15            }
16        }
17        return left;
18    }
19};