1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int left=0,right=0;
5        int ans=0;
6        int vowelc=0;
7        while(right<s.size()){
8            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
9                vowelc+=1;
10            }
11            if(right-left+1==k){
12                //vowelc
13                ans=max(ans,vowelc);
14                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u'){
15                    vowelc-=1;
16                }
17                left++;
18            }
19            right++;
20        }
21        return ans;
22    }
23};