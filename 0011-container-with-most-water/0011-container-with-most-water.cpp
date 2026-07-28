class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size(), len, bred;
        int l = 0, r = n - 1, water = 0;
        while(l <= r){
            len = r - l;
            bred = min(h[l], h[r]);
            water = max(water, len * bred);
            if(h[l] <= h[r]) l++;
            else r--;
        }
        return water;
    }
};