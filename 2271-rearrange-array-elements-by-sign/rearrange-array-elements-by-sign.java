class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer>pos = new ArrayList<>();
        ArrayList <Integer>neg = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=0){
                pos.add(nums[i]);
            }
            else{
                neg.add(nums[i]);
            }
        }
        int result[] = new int[nums.length];
        int pos_idx = 0,neg_idx = 0,i=0;
        while(pos_idx<pos.size() && neg_idx < neg.size()){
            if(i % 2 == 0){
                result[i++]=pos.get(pos_idx++);
            }
            else{
                result[i++]=neg.get(neg_idx++);
            }
        }
        while(pos_idx < pos.size()){
            result[i++]=pos.get(pos_idx++);
        }
        while(neg_idx < neg.size()){
            result[i++]=neg.get(neg_idx++);
        }
        return result;
    }
}