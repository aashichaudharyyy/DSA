1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxC = 0;
5        int count = 0;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]==1){
8                count++;
9            }if(nums[i]==0){
10                maxC = max(maxC,count);
11                count = 0;
12            }
13        }
14        maxC = max(maxC,count);
15        return maxC;
16    }
17};