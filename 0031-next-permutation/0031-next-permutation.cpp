class Solution {
public:
    void reverseme(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        for(i; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                break; // i'th is pivot
            }
        }
        if(i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int pivot = nums[i - 1], indx = i;
        for(int j = i; j < n; j++){
            if(pivot < nums[j]) {
                indx = j;
            }
        }
        swap(nums[i - 1],nums[indx]);
        reverseme(nums,i,n-1);
    }
};