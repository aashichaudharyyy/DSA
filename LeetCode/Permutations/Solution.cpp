class Solution {

    private void permutation(int idx, List<List<Integer>> ans, int[] nums) {

        if (idx == nums.length) {

            List<Integer> list = new ArrayList<>();

            for (int num : nums) {
                list.add(num);
            }

            ans.add(list);
            return;
        }

        for (int i = idx; i < nums.length; i++) {

            swap(idx, i, nums);

            permutation(idx + 1, ans, nums);

            swap(idx, i, nums);
        }
    }

    private void swap(int i, int j, int[] arr) {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public List<List<Integer>> permute(int[] nums) {

        List<List<Integer>> ans = new ArrayList<>();

        permutation(0, ans, nums);

        return ans;
    }
}