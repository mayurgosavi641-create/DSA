class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int buy = prices[0];
       for(int i:prices){
        if(buy<i){
            profit=max(profit,i-buy);
        }
        buy = min(buy,i);

       }
       return profit;
    }
};