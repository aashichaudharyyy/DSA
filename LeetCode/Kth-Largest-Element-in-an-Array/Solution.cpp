1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int> maxHeap;
5        for(int i=0;i<nums.size();i++){
6            maxHeap.push(nums[i]);
7        }
8        while(k-1){
9            maxHeap.pop();
10            k--;
11        }
12        return maxHeap.top();  
13    }
14};