1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        int left=0;
5        int right=0;
6        int len=0;
7        int distinct=0;
8        unordered_map<int,int> freq;
9        while(right<fruits.size()){
10            if(freq[fruits[right]]<1) distinct+=1;
11            freq[fruits[right]]++;
12            while(distinct>2){
13                if(freq[fruits[left]]==1) distinct-=1;
14                freq[fruits[left]]--;
15                left++;
16            }
17            len=max(len,right-left+1);
18            right++;
19        }
20        return len;
21    }
22};