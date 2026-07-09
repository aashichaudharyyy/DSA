1
2
3int removeElement(int* nums, int numsSize, int val) {
4    int k=0;
5    for(int i=0;i<numsSize;i++){
6        if(nums[i]!=val){
7            nums[k]=nums[i];
8            k++;
9        }
10
11    }
12    return k;
13}