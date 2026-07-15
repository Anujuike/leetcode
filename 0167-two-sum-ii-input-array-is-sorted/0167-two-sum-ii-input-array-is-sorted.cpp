class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l = 0, r = n.size() - 1;
        while(l < r ){
            int sum = n[l] + n[r];
            if(sum == target) return{l + 1, r + 1};
            else if(sum > target) r--;
            else l++;
        }
        return {};
    }
};