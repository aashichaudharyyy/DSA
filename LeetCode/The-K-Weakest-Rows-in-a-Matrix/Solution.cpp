1class Solution {
2public:
3    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
4        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
5        vector<int> arr;
6        for(int i=0;i<mat.size();i++){
7            int sum=0;
8            for(int j=0;j<mat[i].size();j++){
9                sum+=mat[i][j];
10            }
11            minheap.push({sum, i});
12        }
13
14        while(k>0){
15            arr.push_back(minheap.top().second);
16            minheap.pop();
17            k--;
18        }
19        return arr;
20    }
21};