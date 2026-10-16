class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        double avg=INT_MIN,sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            if(right-left+1==k){
                avg=max(avg,sum/k);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        return avg;
    }
};