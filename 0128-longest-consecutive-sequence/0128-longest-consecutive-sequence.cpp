class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int ans = INT_MIN;
        unordered_set<int> st(nums.begin(), nums.end());
        for(auto it : st){
            int n = it;
            if(!st.count(n-1)){
                int length = 1;
                while(st.count(n + 1)){
                    n++;
                    length++;
                }
                ans = max(ans,length);
            }
        }
        return ans;
    }
};