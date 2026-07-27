class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = -1;
        int secondMax = -1;

        for (int num : nums) {
            if (num > maxi) {
                secondMax = maxi;
                maxi = num;
            }
            else if (num > secondMax) {
                secondMax = num;
            }
        }

        return (maxi - 1) * (secondMax - 1);
    }
};