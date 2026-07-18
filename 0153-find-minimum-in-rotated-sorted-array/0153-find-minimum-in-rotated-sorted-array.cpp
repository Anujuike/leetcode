class Solution {
public:
    int findMin(vector<int>& n) {
        int low = 0, high = n.size() - 1;
        while(low < high){
            int mid = low + (high - low) / 2;
            if(n[mid] > n[high]) low = mid + 1;
            else high = mid;
        }
        return n[low];
    }
};