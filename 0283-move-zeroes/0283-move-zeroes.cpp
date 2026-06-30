class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write, read;
        int n = nums.size();
        write = -1, read = 0;
        while(read < n){
           if(nums[read] == 0){
            write = read;
            read++;
            break;
           }
           read++;
        }
        while(read < n){
            if(nums[read] != 0){
                swap(nums[read], nums[write]);
                write++;
            }
            read++;
        }

    }
};