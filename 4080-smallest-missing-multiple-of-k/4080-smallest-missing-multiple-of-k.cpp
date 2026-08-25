class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size();
        for (long long m = k; ; m += k) {
            while (i < n && nums[i] < m) i++;
            if (i >= n || nums[i] != m) return m;
        }
    }
};