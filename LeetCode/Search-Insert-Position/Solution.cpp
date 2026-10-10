1class Solution {
2    public int searchInsert(int[] nums, int target) {
3        int low=0;
4        int high=nums.length-1;
5        int mid;
6        while(low<=high){
7            mid = low+(high-low)/2;
8            if(nums[mid]==target){
9                return mid;
10            }else if(target>nums[mid]){
11                low=mid+1;
12            }else{
13                high=mid-1;
14            }
15        }
16        return low;
17    }
18}