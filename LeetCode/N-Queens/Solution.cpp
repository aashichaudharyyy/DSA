1class Solution {
2public:
3    vector<vector<string>> ans;
4    int n;
5    bool issafe(int row, int col, vector<string>& board) {
6        // Upward
7        int r = row;
8        while (r >= 0) {
9            if (board[r][col] == 'Q')
10                return false;
11            r--;
12        }
13        // Upper-left diagonal
14        r = row;
15        int c = col;
16        while (r >= 0 && c >= 0) {
17            if (board[r][c] == 'Q')
18                return false;
19            r--;
20            c--;
21        }
22        // Upper-right diagonal
23        r = row;
24        c = col;
25        while (r >= 0 && c < n) {
26            if (board[r][c] == 'Q')
27                return false;
28            r--;
29            c++;
30        }
31        return true;
32    }
33
34    void solve(vector<string>& board, int row) {
35        if (row == n) {
36            ans.push_back(board);
37            return;
38        }
39
40        for (int col = 0; col < n; col++) {
41            if (issafe(row, col, board)) {
42                board[row][col] = 'Q';
43                solve(board, row + 1);
44                // Backtracking
45                board[row][col] = '.';
46            }
47        }
48    }
49
50    vector<vector<string>> solveNQueens(int N) {
51        n = N;
52        ans.clear();
53        vector<string> board(n, string(n, '.'));
54        solve(board, 0);
55        return ans;
56    }
57};