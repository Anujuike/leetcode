class Solution {
public:
    int rbinarysearch(vector<int>& nums, int low, int high, int target){
        if(low > high) return -1;
        int mid = (low + high)/2;
        if(nums[mid] == target) return mid;
            else if(nums[mid] < target) return rbinarysearch(nums, mid + 1, high, target);
            else return rbinarysearch(nums, low, mid - 1, target);
    }
public:
    int search(vector<int>& nums, int target) {
        /*int low = 0, mid, high = n -1;
        while(low <= high){
            mid = (low + high)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;*/
        int low = 0, high = nums.size() - 1;
        return rbinarysearch(nums, low, high, target);
    }
};