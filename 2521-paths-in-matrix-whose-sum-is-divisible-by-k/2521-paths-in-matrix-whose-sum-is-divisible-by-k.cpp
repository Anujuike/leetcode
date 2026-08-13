class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int MOD = 1e9 + 7;
        vector<vector<vector<int>>> dp(m, vector<vector<int>> (n, vector<int> (k,0)));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0){
                    int r = grid[i][j] % k;
                    dp[i][j][r] = 1;
                    continue;
                }
                int req = grid[i][j] % k;
                if(i>0){
                    for(int r = 0; r < k; r++){
                        int nr = (r+req) % k;
                        dp[i][j][nr] = (dp[i][j][nr] + dp[i-1][j][r]) % MOD;
                    }
                }
                if(j>0){
                    for(int r = 0; r < k; r++){
                        int nr = (r+req) % k;
                        dp[i][j][nr] = (dp[i][j][nr] + dp[i][j-1][r]) % MOD;
                    }
                }
            }
        }
        return (dp[m-1][n-1][0]) % MOD;
    }
};