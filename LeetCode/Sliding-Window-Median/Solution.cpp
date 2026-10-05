1class Solution {
2public:
3    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
4
5        priority_queue<int> left; 
6        priority_queue<int, vector<int>, greater<int>> right;
7
8        unordered_map<int, int> delayed;
9
10        vector<double> ans;
11
12        int leftSize = 0;
13        int rightSize = 0;
14
15        // Remove all deleted elements from LEFT top
16        auto pruneLeft = [&]() {
17            while (!left.empty() && delayed[left.top()] > 0) {
18                delayed[left.top()]--;
19                left.pop();
20            }
21        };
22
23        // Remove all deleted elements from RIGHT top
24        auto pruneRight = [&]() {
25            while (!right.empty() && delayed[right.top()] > 0) {
26                delayed[right.top()]--;
27                right.pop();
28            }
29        };
30
31        // Keep:
32        // leftSize == rightSize
33        // OR
34        // leftSize == rightSize + 1
35        auto balance = [&]() {
36
37            if (leftSize > rightSize + 1) {
38                right.push(left.top());
39                left.pop();
40
41                leftSize--;
42                rightSize++;
43
44                pruneLeft();
45            }
46
47            else if (leftSize < rightSize) {
48                left.push(right.top());
49                right.pop();
50
51                leftSize++;
52                rightSize--;
53
54                pruneRight();
55            }
56        };
57
58        for (int i = 0; i < nums.size(); i++) {
59
60            // ---------- ADD ----------
61            if (left.empty() || nums[i] <= left.top()) {
62                left.push(nums[i]);
63                leftSize++;
64            }
65            else {
66                right.push(nums[i]);
67                rightSize++;
68            }
69
70            balance();
71
72            // ---------- REMOVE ----------
73            if (i >= k) {
74
75                int x = nums[i - k];
76
77                delayed[x]++;
78
79                if (x <= left.top()) {
80                    leftSize--;
81                    pruneLeft();
82                }
83                else {
84                    rightSize--;
85                    pruneRight();
86                }
87
88                balance();
89            }
90
91            // ---------- MEDIAN ----------
92            if (i >= k - 1) {
93
94                pruneLeft();
95                pruneRight();
96
97                if (k % 2 == 1) {
98                    ans.push_back(left.top());
99                }
100                else {
101                    ans.push_back(
102                        ((double)left.top() + right.top()) / 2.0
103                    );
104                }
105            }
106        }
107
108        return ans;
109    }
110};