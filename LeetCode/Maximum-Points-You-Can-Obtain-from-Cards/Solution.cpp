1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int left=0;
5        int right=0;
6        int subsum=0;
7        int sum=0;
8        int minsum=INT_MAX;
9        for(int i=0;i<cardPoints.size();i++){
10            sum+=cardPoints[i];
11        }
12        while(right<cardPoints.size()){
13            subsum+=cardPoints[right];
14            if(right-left+1==(cardPoints.size()-k)){
15                minsum = min(minsum,subsum);
16                subsum-=cardPoints[left];
17                left++;
18            }
19            right++;
20        }
21        if(minsum==INT_MAX) return sum;
22        return sum-minsum;
23    }
24};