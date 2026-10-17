class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,ans=0;
        int freq[2]={0};
        while(right<nums.size()){
            freq[nums[right]]++;
            if(freq[0]>k){
                freq[nums[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};