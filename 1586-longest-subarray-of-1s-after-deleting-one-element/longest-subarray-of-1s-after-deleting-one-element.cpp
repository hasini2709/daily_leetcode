class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0,right = 0;
        int length = 0;
        int count = 0;
        while(right < nums.size()){
            if(nums[right]==0){
                count++;
            }
            while(count > 1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            length = max(length,right-left);
            right++;
        }
        return length;
    }
};