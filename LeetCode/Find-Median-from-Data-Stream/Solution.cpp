1class MedianFinder {
2public:
3    priority_queue<int> maxHeap;
4    priority_queue<int, vector<int>, greater<int>> minHeap;
5    
6    MedianFinder() {
7    }
8    void addNum(int num) {
9        maxHeap.push(num);
10        minHeap.push(maxHeap.top());
11        maxHeap.pop();
12        if(maxHeap.size()<minHeap.size()){
13            maxHeap.push(minHeap.top());
14            minHeap.pop();
15        }
16    }
17    double findMedian() {
18        if((maxHeap.size()+minHeap.size())%2!=0) return maxHeap.top();
19        else return (maxHeap.top()+minHeap.top())/2.0;  
20    }
21};
22
23/**
24 * Your MedianFinder object will be instantiated and called as such:
25 * MedianFinder* obj = new MedianFinder();
26 * obj->addNum(num);
27 * double param_2 = obj->findMedian();
28 */