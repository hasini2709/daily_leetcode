class Solution {
public:
    int maxDiff(int num) {
        
        string s = to_string(num);
        int i =0;
        
        while(i<s.size() &&s[i]=='9'){
            i++;
        }
        string mn =s, mi = s;
        for(int j =0; j<s.size(); j++){
            if(mn[j]==s[i]){
                mn[j] = '9';
            }
        }
        int k =0;
        while(k<s.size() &&s[k]=='1' || (k!=0 && s[k]=='0')){
            k++;
        }
        for(int j =0; j<s.size(); j++){
            if(mi[j]==s[k]){
                if(k!=0){
                    mi[j] ='0';
                    continue;
                }
                mi[j] = '1';
            }
        }

        return stoi(mn)-stoi(mi);

    }
};