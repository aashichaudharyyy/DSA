1class Solution {
2public:
3    int longestSubarray(vector<int>& nums) {
4        int left=0;
5        int right=0;
6        int zeroes=0;
7        int answer=0;
8        while(right<nums.size()){
9            if(nums[right]==0){
10                zeroes++;
11            }
12            while(zeroes > 1){
13                //invalid
14                if(nums[left]==0) zeroes--;
15                left++;
16            }
17            answer = max(answer, right-left);
18            right++;
19        }
20        return answer;
21    }
22};