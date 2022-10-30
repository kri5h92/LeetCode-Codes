class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,currMax = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            currMax = max(0, currMax += prices[i] - prices[i-1]);
            profit = max(profit, currMax);
        }
        return profit;
    }
};