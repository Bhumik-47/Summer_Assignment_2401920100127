/*   
  Question : You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0


Approach : using a one-pass greedy approach (often referred to as a variation of Kadane's Algorithm for this problem). 
It efficiently tracks the lowest price seen so far and calculates the maximum potential profit at each step


Time Complexity : O(n)
Space Complexity : O(1)
  
  */


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<min) {
                min=prices[i];
            }
            profit=max(profit,prices[i]-min);
        }
         return profit;
    }
   
};
