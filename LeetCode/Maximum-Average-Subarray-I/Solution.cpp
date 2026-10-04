1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int left=0;
5        int right=0;
6        double avg=INT_MIN,sum=0;
7        while(right<nums.size()){
8            sum+=nums[right];
9            if(right-left+1==k){
10                avg=max(avg,sum/k);
11                sum-=nums[left];
12                left++;
13            }
14            right++;
15        }
16        return avg;
17    }
18};