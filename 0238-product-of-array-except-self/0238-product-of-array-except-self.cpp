class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {};
        int n = nums.size();
        int preprod = 1;
        vector<int> left(n), right(n);

        for (int i = 0; i < n; i++) {
            left[i] = preprod;
            preprod *= nums[i];
        }

        preprod = 1;

        for (int i = n - 1; i >= 0; i--) {
            right[i] = preprod;
            preprod *= nums[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};