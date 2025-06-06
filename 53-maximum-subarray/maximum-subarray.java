class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int curr_sum = nums[0];
        int res = nums[0];
        for(int i=1;i<n;i++){
            curr_sum = Math.max(curr_sum+nums[i],nums[i]);
            res = Math.max(res,curr_sum);
        }
        return res;

    }
}