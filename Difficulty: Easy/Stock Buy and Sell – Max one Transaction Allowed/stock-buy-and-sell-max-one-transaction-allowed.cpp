class Solution {
public:
    int maximumProfit(vector<int>& prices) {
        int low = 0;             // index of the minimum price so far
        int maxp = 0;            // maximum profit found
        int n = prices.size();

        for (int high = 1; high < n; high++) {
            if (prices[high] > prices[low]) {
                int profit = prices[high] - prices[low];
                maxp = max(maxp, profit);
            } else {
                // found a lower price → better to buy here
                low = high;
            }
        }

        return maxp;
    }
};
