class Solution {
    public boolean exists(int i,int[] arr){
        int low=0;
        int high=arr.length-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==i){
                return true;
            }else if(arr[mid]>i){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }

    public int findKthPositive(int[] arr, int k) {
        int count=0;
        for(int i=1;;i++){
            if(exists(i,arr)==false){
                count++;
                if(count==k){
                    return i;
                }
            }
        }
    }
}