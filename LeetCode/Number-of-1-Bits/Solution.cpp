class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            // convert "n" and "n-1" to binary, then perform "AND" operation
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};