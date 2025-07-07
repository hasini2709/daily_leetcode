class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>basket;
        int left = 0,right = 0,len = 0;
        while(right < fruits.size()){
            basket[fruits[right]]++;
            while(basket.size()>2){
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0){
                    basket.erase(fruits[left]);
                }
                left++;
            }
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};