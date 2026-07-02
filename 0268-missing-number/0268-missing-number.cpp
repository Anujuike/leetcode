class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int n = nums.size();
        for(int i = 1; i <= n; i++){
            xor1 ^= i;
        }
        for(int num : nums){
            xor2 ^= num;
        }
        return (xor1 ^ xor2);
    }
};