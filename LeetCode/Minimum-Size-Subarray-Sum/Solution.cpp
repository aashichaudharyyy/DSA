1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int ans = INT_MAX;
5        int sum = 0;
6        int left = 0;
7        for(int right=0;right<nums.size();right++){
8            sum+=nums[right];
9            while(sum>=target){
10                ans = min(ans,right-left+1);
11                sum-=nums[left];
12                left++;
13            }
14        }
15        if (ans==INT_MAX) return 0;
16        return ans;
17    }
18};