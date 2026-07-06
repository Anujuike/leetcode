class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0, cost = 0;
        for(int price : prices){
            cost = price - mini;
            profit = max(profit,cost);
            mini = min(mini,price);
        }
        return profit;
    }
};