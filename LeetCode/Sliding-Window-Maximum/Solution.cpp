1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int> deq;
5        vector<int> ans;
6        int count = 0;
7
8        for(int i = 0; i < nums.size(); i++) {
9            count++;
10
11            // window se bahar wala element hatao
12            if(!deq.empty() && deq.front() <= i-k) {
13                deq.pop_front();
14            }
15
16            // current element se chhote elements hatao
17            while(!deq.empty() && nums[deq.back()] < nums[i]) {
18                deq.pop_back();
19            }
20
21            deq.push_back(i);
22
23            if(count == k) {
24                ans.push_back(nums[deq.front()]);
25                count--;
26            }
27        }
28
29        return ans;
30    }
31};