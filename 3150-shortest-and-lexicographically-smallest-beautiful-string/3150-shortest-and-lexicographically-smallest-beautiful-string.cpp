class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int> onepos;
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') onepos.push_back(i);
        }
        for(int i = 0; i+k-1 < onepos.size(); i++){
            int l = onepos[i];
            int r = onepos[i+k-1];

            string curr = s.substr(l,r-l+1);

            if(ans.empty() || curr.size() < ans.size() || (curr.size() == ans.size() && curr < ans)){
                ans = curr;
            }
        }
        return ans;

    }
};