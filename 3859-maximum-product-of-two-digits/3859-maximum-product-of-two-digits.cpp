class Solution {
public:
    int maxProduct(int num) {
        int maxi = -1;
        int secondMax = -1;

        while (num > 0) {
            int digit = num % 10;

            if (digit >= maxi) {
                secondMax = maxi;
                maxi = digit;
            }
            else if (digit > secondMax) {
                secondMax = digit;
            }

            num /= 10;
        }

        return maxi * secondMax;
    }
};