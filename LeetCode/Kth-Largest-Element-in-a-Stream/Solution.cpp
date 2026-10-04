1class KthLargest {
2public:
3    priority_queue<int, vector<int>, greater<int>> minheap;
4    int k;
5    KthLargest(int k, vector<int>& nums) {
6        this->k=k;
7        for(int i=0;i<nums.size();i++){
8            minheap.push(nums[i]);
9            if(minheap.size() > k) {
10                minheap.pop();
11            }
12        }
13    }
14    int add(int val) {
15        minheap.push(val);
16        if(minheap.size() > k) {
17            minheap.pop();
18        }
19        return minheap.top();
20    }
21};
22
23/**
24 * Your KthLargest object will be instantiated and called as such:
25 * KthLargest* obj = new KthLargest(k, nums);
26 * int param_1 = obj->add(val);
27 */