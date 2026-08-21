1class Solution {
2public:
3
4    void swap(int i, int j, vector<int>& nums){
5        int temp = nums[i];
6        nums[i] = nums[j];
7        nums[j] = temp;
8    }
9
10    void nextPermutation(vector<int>& nums) {
11        int pivot,max;
12        bool found = false;
13        for(int i=nums.size()-2;i>=0;i--){
14            if(nums[i] < nums[i+1]){
15                found = true;
16                pivot = i;
17                int j = nums.size() - 1;
18                while(nums[j] <= nums[pivot]) {
19                    j--;
20                }
21                swap(pivot,j,nums);
22                //asc right portion
23                sort(nums.begin()+i+1,nums.end());
24                break;
25            }
26        }
27
28        if (not found){
29            sort(nums.begin(),nums.end());
30        }
31    }
32};