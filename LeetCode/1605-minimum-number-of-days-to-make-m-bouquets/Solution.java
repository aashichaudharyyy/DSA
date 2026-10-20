class Solution {
    public int min(int[] nums) {
        int min = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < min) min = nums[i];
        }
        return min;
    }

    public int max(int[] nums) {
        int max = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > max) max = nums[i];
        }
        return max;
    }

    public boolean possible(int[] nums, int mid, int m, int k, int n) {
        int count = 0, bouq = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= mid) {
                count++;
                if (count == k) {
                    bouq++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return bouq >= m;
    }

    public int minDays(int[] nums, int m, int k) {
        int n = nums.length;
        if (n < m * k) return -1;

        int low = min(nums);
        int high = max(nums);
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(nums, mid, m, k, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
}
