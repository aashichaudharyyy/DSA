class Solution {
public:
    bool valid(int freq[26],int freqW[26]){
        for(int i=0;i<26;i++){
            if(freqW[i]!=freq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int left=0;
        int right=0;
        int freqW[26]={0};
        int freq[26]={0};
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        while(right<s2.size()){
            freqW[s2[right]-'a']++;
            if(right-left+1==s1.size()){
                if(valid(freq,freqW)){
                    return true;
                }
                freqW[s2[left]-'a']--;
                left++;
            }
            right++;
        }
        return false;
    }
};