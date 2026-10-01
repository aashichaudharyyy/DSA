1class Solution {
2public:
3    int atMost(vector<int>& nums, int goal) {
4    if(goal < 0)
5        return 0;
6    int left = 0;
7    int right = 0;
8    int sum = 0;
9    int count = 0;
10    while(right < nums.size()) {
11        sum += nums[right];
12        while(sum > goal) {
13            sum -= nums[left];
14            left++;
15        }
16        count += right - left + 1;
17        right++;
18    }
19    return count;
20    }
21    int numSubarraysWithSum(vector<int>& nums, int goal) {
22        return atMost(nums,goal) - atMost(nums,goal-1);
23    }
24};