class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int presum = 0, count = 0;
        for(int num : nums){
            presum += num;
            int n = presum - k;
            count += mpp[n];
            mpp[presum] += 1;
        }
        return count;
    }
};