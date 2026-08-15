class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        bool nozeros = false;
        for(int n : nums){
            x ^= n;
            if(n != 0)
                nozeros = true;
        }
        if(x != 0){
            return nums.size();
        }
        if(nozeros){
            return nums.size() - 1;
        }
        return 0;
    }
};