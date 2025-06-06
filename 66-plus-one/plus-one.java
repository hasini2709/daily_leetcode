class Solution {
    public int[] plusOne(int[] digits) {
        // int n = digits.length;
        int carry = 1;
        for(int i=digits.length-1;i>=0;i--){
            int sum = digits[i]+carry;
            digits[i]=sum % 10;
            carry = sum / 10;
        }
        if (carry > 0){
            int newArray[] = new int[digits.length+1];
            newArray[0]=carry;
            for(int i=0;i<digits.length;i++){
                newArray[i+1]=digits[i];
            }
            return newArray;
        }
        return digits;
    }
}