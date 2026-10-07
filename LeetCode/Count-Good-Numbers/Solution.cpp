1class Solution {
2public:
3    const long long MOD = 1000000007;
4    long long solve(long long x, long long k){
5        if(k==0){
6            return 1;
7        }
8        long long half = solve(x,k/2);
9        if(k%2==0) return (half*half) % MOD;
10        else return (half*half*x) % MOD;
11    }
12    int countGoodNumbers(long long n) {
13        long long even = (n+1)/2;
14        long long odd = n/2;
15        long long answer = solve(5,even) * solve(4,odd);
16        return answer % MOD;
17    }
18};