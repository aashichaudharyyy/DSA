1class Solution {
2public:
3    int hammingDistance(int x, int y) {
4        int n = x^y;
5        int count = 0;
6        while(n){
7            n = n & (n-1);
8            count++;
9        }
10        return count;
11    }
12};