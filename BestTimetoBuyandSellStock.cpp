class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int max_profit=0;
        
        for(int i = 0 ; i< prices.size() ; i++){
            if(prices[i]<min ){
                min=prices[i];
            }
          max_profit=  max_profit > (prices[i]-min) ? max_profit : prices[i]-min;
        }
       return max_profit;
    }
};