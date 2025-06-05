class Solution {
    public int maxProfit(int[] prices) {
        int res = 0;
        int n = prices.length;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                int sub = prices[i]-prices[i-1];
                res+= sub;
            }
        }
        return res;
    }
}