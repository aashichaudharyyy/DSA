1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> freq;
5        int left=0;
6        int right=0;
7        long long ans=0;
8        long long sum=0;
9        while(right<nums.size()){
10            sum+=nums[right];
11            freq[nums[right]]++;
12
13            if(right-left+1==k){
14                  if(freq.size() == k) ans=max(ans,sum);
15                sum-=nums[left];
16                freq[nums[left]]--;
17
18                if(freq[nums[left]] == 0)
19                    freq.erase(nums[left]);
20
21                left++;
22            }
23            right++;
24        }
25        return ans;
26    }
27};