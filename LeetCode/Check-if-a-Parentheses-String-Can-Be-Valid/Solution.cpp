1class Solution {
2public:
3    bool canBeValid(string s, string locked) {
4        if (s.size()%2!=0) return false;
5        int low = 0;
6        int high = 0;
7        for(int i=0;i<s.size();i++){
8            if (s[i] == '(' && locked[i]=='1'){
9                low++;
10                high++;
11            }else if(s[i] == ')' && locked[i]=='1'){
12                low--;
13                high--;
14                if(high < 0) return false;
15                low = max(0,low);
16            }else{
17                //unlocked case 
18                low--;
19                high++;
20                if(high < 0) return false;
21                low = max(0,low);
22            }
23        }
24        if(low==0) return true;
25        return false;
26    }
27};