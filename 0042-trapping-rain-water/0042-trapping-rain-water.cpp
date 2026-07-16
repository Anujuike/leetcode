class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0, r = h.size() - 1;
        int leftmax = 0, rightmax = 0, water = 0;
        while(l < r){
            if(h[l] <= h[r]){
                if(h[l] >= leftmax) leftmax = h[l];
                else water += leftmax - h[l];  
                l++;
            }
            else{
                if(h[r] >= rightmax) rightmax = h[r];    
                else water += rightmax - h[r];
                r--;
            }
        }
        return water;
    }
};