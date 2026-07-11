1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> result(2*n);
5        int p1 = 0;     
6        int p2 = n;    
7        int write = 0;  
8        
9        while (p1 < n) {
10            result[write++] = nums[p1++]; 
11            result[write++] = nums[p2++]; 
12        }
13        
14        return result;
15    }
16};