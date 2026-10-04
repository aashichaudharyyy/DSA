1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        //find lowest left and high right maintaining left<right
5        int right=0;
6        int buy=prices[0];
7        int profit=0;
8        while(right<prices.size()){
9            if(prices[right]<buy){
10                buy=prices[right];
11            }
12            profit=max(profit,prices[right]-buy);
13            right++;
14        }
15        return profit;
16    }
17};
18
19