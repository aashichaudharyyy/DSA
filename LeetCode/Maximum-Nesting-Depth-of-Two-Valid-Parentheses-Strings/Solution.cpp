1class Solution {
2public:
3    vector<int> maxDepthAfterSplit(string seq) {
4        vector<int> answer;
5        int depth=0;
6        for(int i=0;i<seq.size();i++){
7            if(seq[i]=='('){
8                depth++;
9            }
10            answer.push_back(depth%2);
11            if(seq[i]==')'){
12                depth--;
13            }
14
15        }
16
17        return answer;
18    }
19};