1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> res(m+n);
5        int id = 0;
6        int pointer1 = 0;
7        int pointer2 = 0;
8        while(pointer1 < m && pointer2 < n){
9            if(nums1[pointer1] < nums2[pointer2]){
10                res[id] = nums1[pointer1];
11                id++;
12                pointer1++;
13            }else{
14                res[id] = nums2[pointer2];
15                id++;
16                pointer2++;
17            }
18        }
19
20        while(pointer1 < m){
21            res[id] = nums1[pointer1];
22            id++;
23            pointer1++; 
24        }
25
26        while(pointer2 < n){
27            res[id] = nums2[pointer2];
28            id++;
29            pointer2++; 
30        }
31
32        nums1 = res;
33    }
34};