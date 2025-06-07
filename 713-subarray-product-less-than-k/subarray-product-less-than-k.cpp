class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        long i,j,mul,count=0;
        for(i=0;i<n;i++){
            if(nums[i]<k){
                count++;
            }
            mul = nums[i];
            for(j=i+1;j<n;j++){
                mul *= nums[j];
                if(mul < k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};