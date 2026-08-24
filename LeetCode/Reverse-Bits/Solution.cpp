1class Solution {
2public:
3    int reverseBits(int n) {
4        int lsb;
5        int res = 0;
6        for(int i=0;i<32;i++){
7            //extract lsb
8            lsb = n & 1;
9            //make space in res
10            res = res << 1;
11            //add in res
12            res = res | lsb;
13            //shift to find next lsb
14            n = n >> 1;
15        }
16        return res;
17    }
18};