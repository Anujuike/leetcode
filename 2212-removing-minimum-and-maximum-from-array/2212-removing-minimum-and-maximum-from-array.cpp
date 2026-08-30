class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = 0;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            mini = (nums[i] < nums[mini]) ? i : mini;
            maxi = (nums[i] > nums[maxi]) ? i : maxi; 
        }

        int left = min(mini, maxi);
        int right = max(mini, maxi);

        int front = right + 1;
        int back  = n - left;
        int both = (left + 1) + (n - right);

        return min(front, min(both,back));
    }
};