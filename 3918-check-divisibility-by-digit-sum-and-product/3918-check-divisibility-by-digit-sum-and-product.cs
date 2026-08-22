public class Solution {
    public bool CheckDivisibility(int n) {
        int sum = 0 , prod = 1 , x = n;
        while (x > 0) {
            int rem = x % 10;
            sum += rem;
            prod *= rem;
            x /= 10;
        }
        return n % (sum+prod) == 0;
    }
}