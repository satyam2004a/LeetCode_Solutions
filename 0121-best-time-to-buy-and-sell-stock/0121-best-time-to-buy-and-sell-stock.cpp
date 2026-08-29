class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min = 0;
        int profit = 0;
        int n = prices.size();
        for(int i = 0; i < n; i++){
            if(prices[i] < prices[min]){
                min = i;
            }else{
                profit = prices[i] - prices[min];
            }
            if(max_profit < profit){
                max_profit = profit;
            }   
        }
    return max_profit;
    }
};