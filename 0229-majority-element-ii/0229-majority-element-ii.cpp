class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int mini = floor(nums.size()/3);
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        

        for(int num : nums){
            if(cnt1 == 0 && ele2 != num){
                ele1 = num;
                cnt1++;
            }
            else if(cnt2 == 0 && ele1 != num){
                ele2 = num;
                cnt2++;
            }
            else if(num == ele1){
                cnt1++;
            }
            else if(num == ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for(int num : nums){
            if(ele1 == num) cnt1++;
            if(ele2 == num) cnt2++;
        }
        if(cnt1 > mini) ans.push_back(ele1);
        if(cnt2 > mini) ans.push_back(ele2);
        return ans;
    }
};