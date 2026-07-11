1//to save space we start pointers from back hence maintaining inplace changes without a 3rd array and also keeping everything sorted.
2
3class Solution {
4public:
5    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
6        int p1 = m - 1;
7        int p2 = n - 1;
8        int id = m + n - 1;
9
10        while(p1 >= 0 && p2 >= 0){
11            if (nums1[p1] > nums2[p2]){
12                nums1[id] = nums1[p1];
13                p1--;
14            }else{
15                nums1[id] = nums2[p2];
16                p2--;
17            }
18            id--;
19        }
20
21        while(p2>=0){
22            nums1[id] = nums2[p2];
23            p2--;
24            id--;
25        }
26    }
27};