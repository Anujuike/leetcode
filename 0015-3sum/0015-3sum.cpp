class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int f = 0; f < n; f++){
            if(f>0 && nums[f] == nums[f-1]) continue;
            int l = f + 1;
            int r = n - 1;
            while(l<r){
                int sum = nums[f] + nums[l] + nums[r];
                if(sum < 0) {
                    l++;
                }
                else if(sum >0 ) {
                    r--;
                }
                else {
                    vector<int> temp = {nums[f], nums[l], nums[r]};
                    ans.push_back(temp);
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
            }
        }
        return ans;        
    }
};