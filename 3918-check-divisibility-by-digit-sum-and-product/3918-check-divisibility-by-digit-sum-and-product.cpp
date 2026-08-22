class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0, prod = 1;

        while (x > 0) {
            int rem = x % 10;

            sum += rem;
            prod *= rem;

            x /= 10;
        }

        int total = sum + prod;

        return n % total == 0;
    }
};