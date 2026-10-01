1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        // priority_queue<int> maxHeap;
5        // for(int i=0;i<nums.size();i++){
6        //     maxHeap.push(nums[i]);
7        // }
8        // while(k-1){
9        //     maxHeap.pop();
10        //     k--;
11        // }
12        // return maxHeap.top();  
13
14        priority_queue<int, vector<int>, greater<int>> minHeap;
15
16        for(int i=0; i<nums.size();i++){
17            minHeap.push(nums[i]);
18            if(minHeap.size() > k){
19                minHeap.pop();
20            }
21        }
22
23        return minHeap.top();
24        
25    }
26};