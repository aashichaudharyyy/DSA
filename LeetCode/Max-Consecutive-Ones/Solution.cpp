1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int left=0;
5        int right=0;
6        int answer=0;
7        while(right<nums.size()){
8            if(nums[right]==0){
9                left=right+1;
10            }
11            answer=max(answer,right-left+1);
12            right++;
13        }
14        return answer;
15    }
16};