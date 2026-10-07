1class Solution {
2public:
3    set<string> ans;
4
5    void solve(string &s, int i, int l, int r, int bal, string cur) {
6        if (bal < 0) return;
7
8        if (i == s.size()) {
9            if (l == 0 && r == 0 && bal == 0)
10                ans.insert(cur);
11            return;
12        }
13
14        if (s[i] == '(') {
15            if (l) solve(s, i+1, l-1, r, bal, cur);
16            solve(s, i+1, l, r, bal+1, cur+'(');
17        }
18        else if (s[i] == ')') {
19            if (r) solve(s, i+1, l, r-1, bal, cur);
20            if (bal) solve(s, i+1, l, r, bal-1, cur+')');
21        }
22        else {
23            solve(s, i+1, l, r, bal, cur+s[i]);
24        }
25    }
26
27    vector<string> removeInvalidParentheses(string s) {
28        int l = 0, r = 0;
29
30        for (char c : s) {
31            if (c == '(') l++;
32            else if (c == ')') {
33                if (l) l--;
34                else r++;
35            }
36        }
37
38        solve(s, 0, l, r, 0, "");
39        return vector<string>(ans.begin(), ans.end());
40    }
41};