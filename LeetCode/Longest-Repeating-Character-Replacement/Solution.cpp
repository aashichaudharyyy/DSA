1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int left=0;
5        int right=0;
6        int maxLen=0;
7        int maxFreq = 0;
8        int freq[26] = {0};
9        while(right<s.size()){
10            //add s[right]
11            int windowlen = right-left+1;
12            freq[s[right] - 'A']++;
13            maxFreq = max(maxFreq,freq[s[right] - 'A']);
14            if(windowlen - maxFreq > k){
15                //invalid window
16                freq[s[left] - 'A']--;
17                left++;
18                //remove s[left]
19            }
20            maxLen = max(maxLen, right-left+1);
21            right++;
22        }
23        return maxLen;
24    }
25};