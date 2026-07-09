1// why 2 pointer? because array -> sorted -> output as pair -> says to not use extra space
2
3class Solution {
4public:
5    vector<int> twoSum(vector<int>& numbers, int target) {
6        int left = 0;
7        int right = numbers.size() - 1;
8        while(left<right){
9            int sum = numbers[left] + numbers[right];
10            if (sum == target)
11                return {left+1,right+1};
12            else if (sum > target)
13                right--;
14            else
15                left++;
16        };
17        return {};
18    };
19};