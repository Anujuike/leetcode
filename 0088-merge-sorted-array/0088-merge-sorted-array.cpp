class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ans[m+n];
        int p1 = 0;
        int p2 = 0;
        int indx = 0;
        while(p1 < m && p2 < n){
            if(nums1[p1] <= nums2[p2]){
                ans[indx] = nums1[p1];
                p1++;
                indx++; 
            }
            else{
                ans[indx] = nums2[p2];
                indx++;
                p2++;
            }
        }
        while(p1 < m){
            ans[indx++] = nums1[p1++];
        }
        while(p2 < n){
            ans[indx++] = nums2[p2++];
        }
        for(int i = 0; i < m+n; i++){
            nums1[i] = ans[i];
        }
    }
};