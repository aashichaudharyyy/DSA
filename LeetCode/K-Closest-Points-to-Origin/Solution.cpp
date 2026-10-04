1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        vector<vector<int>> arr;
5        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
6        for(int i=0;i<points.size();i++){
7            int x=points[i][0];
8            int y=points[i][1];
9            int dist = x*x + y*y;
10            minheap.push({dist,i});
11        }
12
13        while(k>0){
14            arr.push_back(points[minheap.top().second]);
15            minheap.pop();
16            k--;
17        }
18
19        return arr;
20    }
21};