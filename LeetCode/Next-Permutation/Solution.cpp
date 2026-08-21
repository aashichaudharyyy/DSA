1//find increasing -> find next greater in right & swap -> sort right -> if not found -> sort full
2
3class Solution {
4public:
5    void swap(int i, int j, vector<int>& nums){
6        int temp = nums[i];
7        nums[i] = nums[j];
8        nums[j] = temp;
9    }
10
11    void nextPermutation(vector<int>& nums) {
12        int pivot,max;
13        bool found = false;
14        for(int i=nums.size()-2;i>=0;i--){
15            if(nums[i] < nums[i+1]){
16                found = true;
17                pivot = i;
18                int j = nums.size() - 1;
19                while(nums[j] <= nums[pivot]) {
20                    j--;
21                }
22                swap(pivot,j,nums);
23                //asc right portion
24                sort(nums.begin()+i+1,nums.end());
25                break;
26            }
27        }
28
29        if (not found){
30            sort(nums.begin(),nums.end());
31        }
32    }
33};