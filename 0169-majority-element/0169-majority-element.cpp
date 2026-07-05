class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el;
        for(int num : nums){
            if(count == 0){
                count = 1;
                el = num;
            }
            else if(num == el){
                count++;
            }
            else{
                count--;
            }
        }
        int rcount = 0;
        for(int num : nums){
            if(num == el) rcount++;
        }
        return el;
    }

};