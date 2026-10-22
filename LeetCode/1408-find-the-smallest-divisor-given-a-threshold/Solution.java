class Solution {

    public int maxArr(int[] nums){
        int n=nums.length;
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        return max;
    }

    public boolean possible(int[] nums,int limit,int k){
        int n=nums.length;
        int sum=0;
        for(int i=0;i<n;i++){
            double num=(double)nums[i]/k;
            int intPart = (int) num;
            if (num != intPart) {
                sum+=intPart + 1;
            } else {
                sum+=intPart;
            }
        }
        return sum<=limit;
    }

    public int smallestDivisor(int[] nums, int threshold) {
        int n=nums.length;
        int low=1;
        int high=maxArr(nums);
        int mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(possible(nums,threshold,mid)==true){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}