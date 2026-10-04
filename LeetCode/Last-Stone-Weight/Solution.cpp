1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> maxheap;
5        for(int i=0;i<stones.size();i++){
6            maxheap.push(stones[i]);
7        }
8        int x,y;
9        while(maxheap.size()>1){
10            y=maxheap.top();
11            maxheap.pop();
12            x=maxheap.top();
13            maxheap.pop();
14            if(x!=y){
15                maxheap.push(y-x);
16            }
17        }
18        if(maxheap.size()==0) return 0;
19        return maxheap.top();
20    }
21};