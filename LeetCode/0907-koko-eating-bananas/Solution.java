class Solution {
    public int maxArray(int[] arr){
        int max=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }

    public int hours(int[] arr,int k){
        int hours=0;
        for(int i=0;i<arr.length;i++){
            hours+=Math.ceil((double)arr[i]/k);
        }
        return hours;
    }
    public int minEatingSpeed(int[] nums, int h) {
        int low=1;
        int high=maxArray(nums);
        int mid;
        int ans=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(hours(nums,mid)<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}