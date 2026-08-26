class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        // vector<int> onepos;
        // string ans = "";

        // for(int i = 0; i < s.size(); i++){
        //     if(s[i] == '1') onepos.push_back(i);
        // }
        // for(int i = 0; i+k-1 < onepos.size(); i++){
            
        //     string curr = s.substr(l,r-l+1);

        //     if(ans.empty() || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
        //         ans = curr;
        //     }
        // }
        // return ans;
        int l = 0;
        int one = 0;
        string ans = "";

        for(int r = 0; r < s.size(); r++){
            if(s[r] == '1') one++;
            while(one > k){
                if(s[l] == '1') one--;
                l++;
            }
            if(one == k){
                while(s[l] == '0') l++;

                string curr = s.substr(l,r-l+1);

                if(ans.empty() || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
                             ans = curr;
                }

            }
        }
        return ans;

    }
};