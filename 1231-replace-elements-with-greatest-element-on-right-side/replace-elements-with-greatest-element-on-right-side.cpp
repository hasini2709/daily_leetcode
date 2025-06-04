class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>res(n);
        int max_no = -1;
        for(int i=n-1;i>=0;i--){
           res[i]=max_no;
           max_no = max(max_no,arr[i]);
        }
        return res;
    }
};