1//Two-pointer technique
2
3class Solution {
4public:
5    void reverseString(vector<char>& s) {
6        int left = 0;
7        int right = s.size()-1;
8        while(left<right){
9            swap(s[left],s[right]);
10            left++;
11            right--;
12        }
13    }
14};