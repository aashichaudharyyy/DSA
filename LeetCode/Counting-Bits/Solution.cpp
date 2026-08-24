1class Solution {
2public:
3    int numberOfOnes(int n){
4        int count = 0;
5        while(n!=0){
6            n = n & (n-1);
7            count++;
8        }
9        return count;
10    }
11    vector<int> countBits(int n) {
12        vector<int> ans(n+1);
13        for(int i=0;i<ans.size();i++){
14            ans[i] = numberOfOnes(i);
15        }
16        return ans;
17    }
18};