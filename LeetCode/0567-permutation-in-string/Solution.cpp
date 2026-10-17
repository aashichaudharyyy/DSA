class Solution {
public:

    bool permutation(string s1, string s) {
    if(s1.size() != s.size())
        return false;

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i = 0; i < s1.size(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i])
            return false;
    }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int left=0;
        string s="";
        for(int right=0;right<s2.size();right++){
            //add s[right]
            s+=s2[right];
            if(right-left+1 == s1.size()){
                //check if permutation

                if (permutation(s1,s)){
                    return true;
                }
                s = s.substr(1);
                left++;
            }
        }
        return false;
    }
};