public class Solution {
    public int numEquivDominoPairs(int[][] dominoes) {
        int[] count = new int[100]; 
        int res = 0;

        for (int[] d : dominoes) {
            int a = d[0];
            int b = d[1];
            int key = Math.min(a, b) * 10 + Math.max(a, b); 
            res += count[key]; 
            count[key]++;     
        }

        return res;
    }
}
