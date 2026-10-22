/*Approach 1 - linear search

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start=-1;
        int end=-1;
        int n = nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(start==-1){
                    start=i;
                }
                end=i;
            }
        }
        int[] arr = {start,end};
        return arr;
    }
}*/

/* Approach 2 - Lowerbound & upperbound

class Solution {
    public static int lb(int[] arr,int target){
        int n=arr.length;
        int low=0;
        int high=n-1;
        int lb=n;
        int mid;

        //lowerbound(start) -  arr[ind]>=target
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]>=target){
                lb=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return lb;

    }
    public static int ub(int[] arr,int target){
        int n=arr.length;
        int low=0;
        int high=n-1;
        int ub=n;
        int mid;

        //lowerbound(start) -  arr[ind]>=target
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]>target){
                ub=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ub;
    }
    public static int[] searchRange(int[] nums, int target) {
        //start=lowerbound
        //end=upperbound-1
        int lb=lb(nums,target);
        int ub=ub(nums,target);
        if(lb==nums.length||nums[lb]!=target){
            return new int[] {-1,-1};
        }
        return new int[] {lb,ub-1};
    }
}*/

class Solution {
    public static int[] searchRange(int[] nums, int target){
        int low=0;
        int high=nums.length-1;
        int mid;
        int start=-1;
        int end=-1;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                start=mid;
                high=mid-1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        low=0;
        high=nums.length-1;

        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                end=mid;
                low=mid+1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return new int[] {start,end};
    }
}