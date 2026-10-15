1class Solution {
2public:
3    vector<vector<string>> ans;
4    vector<string> board;
5    int n;
6    bool issafe(int row,int col,vector<string> board){
7        //upward
8        int r=row;
9        int c=col;
10        while(r>=0){
11            if(board[r][c]=='Q'){
12                return false;
13            }
14            r--;
15        }
16
17        r=row;
18        c=col;
19        //left diagonal
20        while(r>=0 && c>=0){
21            if(board[r][c]=='Q'){
22                return false;
23            }
24            r--;
25            c--;
26        }
27        r=row;
28        c=col;
29        while(r>=0 && c<n){
30            if(board[r][c]=='Q'){
31                return false;
32            }
33            r--;
34            c++;
35        }
36
37        return true;
38    }
39    void solve(vector<string>& board, int row){
40        if(row==n){
41            ans.push_back(board);
42            return;
43        }
44
45        for(int col=0;col<n;col++){
46            if(issafe(row,col,board)){
47                board[row][col]='Q';
48                solve(board,row+1);
49                board[row][col]='.';
50            }
51        }
52    }
53    vector<vector<string>> solveNQueens(int n) {
54        ans.clear();
55        this->n = n;
56        for(int i=0;i<n;i++){
57            board.push_back("");
58            for(int j=0;j<n;j++){
59                board[i].push_back('.');
60            }
61        }
62        solve(board,0);
63        return ans;
64    }
65};