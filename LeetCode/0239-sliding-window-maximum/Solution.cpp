class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deq;
        vector<int> ans;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            count++;

            // window se bahar wala element hatao
            if(!deq.empty() && deq.front() <= i-k) {
                deq.pop_front();
            }

            // current element se chhote elements hatao
            while(!deq.empty() && nums[deq.back()] < nums[i]) {
                deq.pop_back();
            }

            deq.push_back(i);

            if(count == k) {
                ans.push_back(nums[deq.front()]);
                count--;
            }
        }

        return ans;
    }
};