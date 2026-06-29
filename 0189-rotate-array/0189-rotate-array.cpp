class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }
    void reverseArray(vector<int>& arr, int start, int end){
        while(end > start){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};