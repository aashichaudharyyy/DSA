class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int maxLen=0;
        int maxFreq = 0;
        int freq[26] = {0};
        while(right<s.size()){
            //add s[right]
            int windowlen = right-left+1;
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq,freq[s[right] - 'A']);
            if(windowlen - maxFreq > k){
                //invalid window
                freq[s[left] - 'A']--;
                left++;
                //remove s[left]
            }
            maxLen = max(maxLen, right-left+1);
            right++;
        }
        return maxLen;
    }
};