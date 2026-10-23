class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, prev = 0, n = nums.size();
        for(int i : nums){
            if(!i){
                prev = max(prev, count);
                count = 0;
                continue;
            }
            count++;
        }
        return max(prev,count);
    }
};