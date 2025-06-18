class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int  minPrice = INT_MAX;
       int profit = 0;

       //looping through the prices each day 
       for(int i = 0;i < prices.size();i++){
        //pichla aur ye day consider karna hoga for next day 
        if(prices[i]<minPrice){
            minPrice = prices[i];
        }else if (prices[i] - minPrice > profit){
            profit = prices[i] - minPrice ;
        }

       }
       return profit;
        
    }
};