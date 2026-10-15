1class Solution {
2public:
3    bool ans=false;
4    void solve(int row,int col, int index, vector<vector<char>>& board, string word){
5        if(index==word.size()){
6            ans = true;
7            return;
8        }
9
10        if(row>=board.size() || col>=board[row].size() || row<0 || col<0){
11            return;
12        }
13
14        if(board[row][col]=='#'){
15            return;
16        }
17
18        if(board[row][col] != word[index]){
19            return;
20        }
21
22        char temp=board[row][col];
23        board[row][col]='#';
24        solve(row+1,col,index+1,board,word);
25        solve(row-1,col,index+1,board,word);
26        solve(row,col-1,index+1,board,word);
27        solve(row,col+1,index+1,board,word);
28        board[row][col]=temp;
29    }
30    bool exist(vector<vector<char>>& board, string word) {
31        for(int i=0;i<board.size();i++){
32            for(int j=0;j<board[i].size();j++){
33                solve(i,j,0,board,word);
34            }
35        }
36        return ans;
37    }
38};