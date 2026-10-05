1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4        priority_queue<int, vector<int>, greater<int>> minheap;
5
6        for(int i=0;i<matrix.size();i++){
7            for(int j=0;j<matrix[i].size();j++){
8                minheap.push(matrix[i][j]);
9            }
10        }
11        while(k>1){
12            minheap.pop();
13            k--;
14        }
15
16        return minheap.top();
17    }
18};