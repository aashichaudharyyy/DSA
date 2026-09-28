1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int left = 0;
5        int count = 0;
6        double sum = 0;
7        for(int right=0;right<arr.size();right++){
8            //add right 
9            sum += arr[right];
10            if((right-left+1) == k){
11                //update ans
12                double avgn = sum/k;
13                if(avgn >= threshold){
14                    count+=1;
15                }
16                sum-=arr[left];
17                left++;
18            }
19        }
20        return count;
21    }
22};
23