1class Solution {
2public:
3    int longestValidParentheses(string s) {
4        vector<int> stack;
5        stack.push_back(-1);
6        int len;
7        int maxLen=0;
8        for(int i=0;i<s.size();i++){
9            if(s[i]=='('){
10                stack.push_back(i);
11            }else if(s[i]==')'){
12                stack.pop_back();
13                if(stack.size()==0){
14                    stack.push_back(i);
15                }else{
16                    len = i - stack.back();
17                    maxLen = max(maxLen,len);
18                }
19            }
20        }
21        return maxLen;
22    }
23};