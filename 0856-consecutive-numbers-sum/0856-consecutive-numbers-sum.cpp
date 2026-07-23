class Solution {
public:
    int consecutiveNumbersSum(int n) {
        while(n%2 == 0) n /= 2;
        int ans = 1;

        for (long long p = 3; p * p <= n; p += 2) {
            if (n % p == 0) {
                int count = 0;

                while (n % p == 0) {
                    n /= p;
                    count++;
                }

                ans *= (count + 1);
            }
        }
        if (n > 1) ans *= 2;

        return ans;
    }
};