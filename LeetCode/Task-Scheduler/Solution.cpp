1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        priority_queue<int> maxheap;
5        unordered_map<char,int> freq;
6        for(int i=0;i<tasks.size();i++){
7            int f=freq[tasks[i]]++;
8        }
9
10        for(auto it: freq){
11            maxheap.push(it.second);
12        }
13
14        int count=0;
15        while(!maxheap.empty()){
16            vector<int> temp;
17            int used=0;
18            for(int i=0;i<n+1;i++){
19                if(!maxheap.empty()){
20                    int hfq=maxheap.top()-1;
21                    maxheap.pop();
22                    used++;
23                    if(hfq>0) temp.push_back(hfq);
24                }
25            }
26            if(maxheap.empty() && temp.empty()) count += used;
27            else count += n+1;
28            for(int i:temp){
29                maxheap.push(i);
30            }
31
32        }
33        return count;
34    }
35};