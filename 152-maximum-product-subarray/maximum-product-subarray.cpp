class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currmax = nums[0];
        int currmin = nums[0];
        int maxprod = nums[0];
        for(int i=1;i<n;i++){
            int temp = max({nums[i],nums[i]*currmax,nums[i]*currmin});
            currmin = min({nums[i],nums[i]*currmax,nums[i]*currmin});
            currmax = temp;
            maxprod = max(maxprod,currmax);
        }
        return maxprod;
    }
};