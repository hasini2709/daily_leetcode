class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st = 0,end = 0;
        int count = 0;
        int res = 0;
        int n = nums.size();
        while(end < n){
            if(nums[end]==0){
                count++;
            }
            while(count > k){
                if(nums[st]==0){
                    count --;
                }
                st++;
            }
            res = max(res,(end-st+1));
            end++;
        }
        return res;
    }
};