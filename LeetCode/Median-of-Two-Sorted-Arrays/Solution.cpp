1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        double median = 0.0;
5        int left = 0;
6        if(nums1.size() > nums2.size())
7            swap(nums1, nums2);
8
9        int n = nums1.size();
10        int m = nums2.size();
11        int leftSize = (n+m+1)/2;
12        int right=n;
13
14        while(left<=right){
15            int cutA = (left+right)/2;
16            int cutB = leftSize - cutA;
17            int maxleftA = cutA == 0? INT_MIN : nums1[cutA-1];
18            int maxleftB = cutB == 0? INT_MIN : nums2[cutB-1];
19            int minrightA = cutA == n? INT_MAX : nums1[cutA];
20            int minrightB = cutB == m? INT_MAX : nums2[cutB];
21
22            if(maxleftA > minrightB){
23                right = cutA-1;//go left
24            }else if(maxleftB > minrightA){
25                left = cutA+1;//go right
26            }else{
27                if((n+m)%2==0){
28                    median = (max(maxleftA, maxleftB) + min(minrightA, minrightB)) / 2.0;
29                }else{
30                    median = max(maxleftA, maxleftB);
31                }
32                return median;
33            }
34        }
35        return 0.0;
36
37    }
38};