class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidate = -1;
        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(num == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        count = 0;
        for(int num : nums){
            if(num == candidate){
                count++;
            }
        }
        if(count > n/2){
            return candidate;
        }
        else{
            return -1;
        }
    }
};