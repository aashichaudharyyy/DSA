1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4
5        // Always binary search on smaller array
6        if(nums1.size() > nums2.size())
7            return findMedianSortedArrays(nums2, nums1);
8
9        int n = nums1.size();
10        int m = nums2.size();
11
12        int leftsize = (n + m + 1) / 2;
13
14        int left = 0;
15        int right = n;
16
17        while(left <= right) {
18
19            int cutA = (left + right) / 2;
20            int cutB = leftsize - cutA;
21
22            int leftmaxA = (cutA == 0) ? INT_MIN : nums1[cutA - 1];
23            int rightminA = (cutA == n) ? INT_MAX : nums1[cutA];
24
25            int leftmaxB = (cutB == 0) ? INT_MIN : nums2[cutB - 1];
26            int rightminB = (cutB == m) ? INT_MAX : nums2[cutB];
27
28            // A cut is too far right
29            if(leftmaxA > rightminB) {
30                right = cutA - 1;
31            }
32
33            // A cut is too far left
34            else if(leftmaxB > rightminA) {
35                left = cutA + 1;
36            }
37
38            // Correct partition
39            else {
40
41                int leftmax = max(leftmaxA, leftmaxB);
42                int rightmin = min(rightminA, rightminB);
43
44                // Odd
45                if((n + m) % 2 == 1)
46                    return leftmax;
47
48                // Even
49                return (leftmax + rightmin) / 2.0;
50            }
51        }
52
53        return 0.0;
54    }
55};