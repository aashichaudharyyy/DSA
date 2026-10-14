1class Solution {
2public:
3    vector<string> ans;
4    vector<string> lettersComb = {
5        "", "", "abc", "def", "ghi",
6        "jkl", "mno", "pqrs", "tuv", "wxyz"
7    };
8
9    void solve(string digits, int index, string current){
10        if(current.size()==digits.size()){
11            //valid string
12            ans.push_back(current);
13            return;
14        }
15
16        string letters = lettersComb[digits[index] - '0'];
17        for(int i=0;i<letters.size();i++){
18            current.push_back(letters[i]);
19            solve(digits,index+1,current);
20            current.pop_back();
21        }
22    }
23    vector<string> letterCombinations(string digits) {
24        string current="";
25        solve(digits,0,current);
26        return ans;
27    }
28};