class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> gaps;
        gaps.reserve(n + 1);
        gaps.push_back(startTime[0]); 
        for (int i = 1; i < n; ++i)
            gaps.push_back(startTime[i] - endTime[i - 1]);
        gaps.push_back(eventTime - endTime.back()); 
        
        int windowSum = accumulate(gaps.begin(), gaps.begin() + (k + 1), 0);
        int ans = windowSum;
        for (int i = k + 1; i < gaps.size(); ++i) {
            windowSum += gaps[i] - gaps[i - k - 1];
            ans = max(ans, windowSum);
        }
        
        return ans;
    }
};
