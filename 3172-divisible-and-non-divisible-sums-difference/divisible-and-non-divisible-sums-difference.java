public class Solution {
    public int differenceOfSums(int n, int m) {
        int totalSum = n * (n + 1) / 2;
        int divisible_count = n / m;
        int divisibleSum = m * divisible_count * (divisible_count + 1) / 2;
        return totalSum - 2 * divisibleSum;
    }
}