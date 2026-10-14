1class Solution {
2public:
3    string maxSumOfSquares(int num, int sum) {
4        string ans = "";
5        for(int i = 0; i < num; i++) {
6            int digit = min(9, sum);
7
8            ans+=to_string(digit);
9            
10            sum-=digit;
11        }
12        if(sum==0) return ans;
13        else return "";
14    }
15};
16