class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n*n;
        int rep = -1;
        int miss = -1;
        vector<int>freq(N+1,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=1;i<=N;i++){
            if(freq[i]==0){
                miss = i;
            }
            else if(freq[i]==2){
                rep = i;
            }
        }
        return {rep,miss};
    }
};