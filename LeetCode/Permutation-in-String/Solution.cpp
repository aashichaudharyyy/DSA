1class Solution {
2public:
3
4    bool permutation(string s1, string s) {
5    if(s1.size() != s.size())
6        return false;
7
8    int freq1[26] = {0};
9    int freq2[26] = {0};
10
11    for(int i = 0; i < s1.size(); i++) {
12        freq1[s1[i] - 'a']++;
13        freq2[s[i] - 'a']++;
14    }
15
16    for(int i = 0; i < 26; i++) {
17        if(freq1[i] != freq2[i])
18            return false;
19    }
20        return true;
21    }
22
23    bool checkInclusion(string s1, string s2) {
24        int left=0;
25        int freq1[26] = {0};
26        string s="";
27        for(int right=0;right<s2.size();right++){
28            //add s[right]
29            s+=s2[right];
30            if(right-left+1 == s1.size()){
31                //check if permutation
32
33                if (permutation(s1,s)){
34                    return true;
35                }
36                s = s.substr(1);
37                left++;
38            }
39        }
40        return false;
41    }
42};