1#include <algorithm>
2class Solution {
3public:
4    vector<vector<string>> ans;
5    void solve(string s, int start, vector<string>& subs) {
6    if (start == s.size()) {
7        // answer store
8        ans.push_back(subs);
9        return;
10    }
11
12    for (int end = start; end < s.size(); end++) {
13        // substring 
14        string curr = s.substr(start, end - start + 1);
15        // palindrome check
16        string r=curr;
17        reverse(curr.begin(),curr.end());
18        if(curr==r){
19            subs.push_back(r);
20            solve(s,end+1,subs);
21            subs.pop_back();
22        }
23        // push -> recursion(end + 1) -> pop
24    }
25}
26    vector<vector<string>> partition(string s) {
27        vector<string> subs;
28        solve(s,0,subs);
29        return ans;
30    }
31};