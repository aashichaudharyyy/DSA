1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left=0;
5        int right=0;
6        int sum=0;
7        int len=INT_MAX;;
8        while(right<nums.size()){
9            sum+=nums[right];
10            while(sum>=target){
11                len = min(len,right-left+1);
12                sum-=nums[left];
13                left++;
14            }
15            right++;
16        }
17        if(len==INT_MAX) return 0;
18        else return len;
19    }
20};