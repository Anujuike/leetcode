class Solution {
public:
    void change(vector<int>& num, vector<vector<int>>& shifts){
        int start, end, x, s;
        int m = shifts.size();
        int n = num.size();

        for(auto& shift : shifts){
            start = shift[0];
            end = shift[1];
            x = shift[2];

            if(x == 1) s = 1;
            else s = -1;

            num[start] += s;
            if(end + 1 < n)
                num[end + 1] -= s;
        }
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int len = s.size();
        vector<int> num(len,0);
        change(num, shifts);

        for(int i = 1; i < len; i++) 
            num[i] += num[i-1];

        for(int i = 0; i < len; i++){
            int shift = num[i] % 26;

            if(shift < 0) shift += 26;

            s[i] = ((s[i] - 'a') + shift) % 26 + 'a';
        }
        return s;
    }
};