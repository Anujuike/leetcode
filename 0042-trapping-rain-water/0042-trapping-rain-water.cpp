class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n), right(n);
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr = max(curr, height[i]);
            left[i] = curr;
        }
        curr = 0;
        for(int i = n - 1; i >= 0; i--){
            curr = max(curr, height[i]);
            right[i] = curr;
        }
        int water = 0;
        for(int i = 0; i < n; i++){
            water += max(0,  min(left[i], right[i]) - height[i]);
        }
        return water;
    }
};