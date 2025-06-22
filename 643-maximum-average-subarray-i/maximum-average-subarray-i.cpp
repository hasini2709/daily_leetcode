class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        double avg = 0;
        double max_avg  = 0;
        int n  = nums.size();
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        max_avg = (double)sum/k;
        for(int i=k;i<n;i++){
            sum += nums[i]-nums[i-k];
            avg = (double)sum/k;
            max_avg = max(max_avg,avg);

        }
        return max_avg;
    }
};