class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> mpp;
        for(auto& i : reservedSeats){
            mpp[i[0]].insert(i[1]);
        }
        int ans = 0;
        ans = (n-mpp.size()) * 2;

        for(auto& [row, seat] : mpp){
            bool l = true;
            bool mid = true;
            bool r = true;

            for(int i = 2; i<=5; i++){
                if(seat.count(i)){
                    l = false;
                    break;
                }
            }
            for(int i = 4; i<=7; i++){
                if(seat.count(i)){
                    mid = false;
                    break;
                }
            }
            for(int i = 6; i<=9; i++){
                if(seat.count(i)){
                    r = false;
                    break;
                }
            }
            if(l && r){
                ans += 2;
            }
            else if(l || mid || r){
                ans++;
            }

        }
        return ans;
    }
};