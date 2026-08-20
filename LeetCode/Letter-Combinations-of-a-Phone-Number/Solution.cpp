1class Solution {
2public:
3    vector<string> ans;
4    vector<string> letters = {
5        "", "", "abc", "def", "ghi",
6        "jkl", "mno", "pqrs", "tuv", "wxyz"
7    };
8
9    void solve(string digits, int index, string current){
10         if(index == digits.size()) {
11            ans.push_back(current);
12            return;
13        }
14        
15        string str = letters[digits[index] - '0'];
16        for(char ch : str) {
17            // include
18            current.push_back(ch);
19            solve(digits, index + 1, current);
20
21            // exclude
22            current.pop_back();
23        }
24    }
25    vector<string> letterCombinations(string digits) {
26        if(digits.empty())
27            return {};
28
29        string current;
30        solve(digits, 0, current);
31
32        return ans;
33    }
34};