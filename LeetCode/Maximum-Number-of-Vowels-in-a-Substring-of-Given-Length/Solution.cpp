1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int left = 0;
5        int vowel = 0;
6        int maxVowel = 0;
7        for(int right = 0; right < s.size(); right++){
8            // new character entered window
9            if(s[right] == 'a' || s[right] == 'e' || 
10               s[right] == 'i' || s[right] == 'o' || 
11               s[right] == 'u') {
12                vowel++;
13            }
14
15            if(right - left + 1 == k){
16                maxVowel = max(maxVowel, vowel);
17                // character leaving window
18                if(s[left] == 'a' || s[left] == 'e' || 
19                   s[left] == 'i' || s[left] == 'o' || 
20                   s[left] == 'u') {
21                    vowel--;
22                }
23                left++;
24            }
25        }
26        return maxVowel;
27    }
28};