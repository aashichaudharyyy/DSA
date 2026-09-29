1class Solution {
2    public double findMedianSortedArrays(int[] a, int[] b) {
3        int n1 = a.length, n2 = b.length;
4        //if n1 is bigger swap the arrays:
5        if (n1 > n2) return findMedianSortedArrays(b, a);
6
7        int n = n1 + n2; //total length
8        int left = (n1 + n2 + 1) / 2; //length of left half
9        //apply binary search:
10        int low = 0, high = n1;
11        while (low <= high) {
12            int mid1 = (low + high) / 2;
13            int mid2 = left - mid1;
14            //calculate l1, l2, r1 and r2;
15            int l1 = (mid1 > 0) ? a[mid1 - 1] : Integer.MIN_VALUE;
16            int l2 = (mid2 > 0) ? b[mid2 - 1] : Integer.MIN_VALUE;
17            int r1 = (mid1 < n1) ? a[mid1] : Integer.MAX_VALUE;
18            int r2 = (mid2 < n2) ? b[mid2] : Integer.MAX_VALUE;
19
20            if (l1 <= r2 && l2 <= r1) {
21                if (n % 2 == 1) return Math.max(l1, l2);
22                else return ((double) (Math.max(l1, l2) + Math.min(r1, r2))) / 2.0;
23            } else if (l1 > r2) high = mid1 - 1;
24            else low = mid1 + 1;
25        }
26        return 0; //dummy statement
27    }
28}