class Solution {
    public:
    int maxProfit(vector<int> &prices) {
      int l = 0, r = 0, maxprofit = 0;
      while (r < prices.size()) {
        int profit = prices[r] - prices[l];
        if (prices[l] > prices[r]) {
          l++;
        }
        else{
          maxprofit = max(profit, maxprofit);
          r++;
        }
        
      }
      return maxprofit;
    }
    };