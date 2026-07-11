1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.size() != t.size()) return false;
5
6        vector<int> freq(26,0);
7
8        for(int i=0;i<s.size();i++){
9            freq[s[i] - 'a']++;
10            freq[t[i] - 'a']--;
11        }
12
13        for(int x : freq){
14            if(x!=0) return false;
15        }
16
17        return true;
18    }
19};