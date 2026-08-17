class Solution {
   public:
    int maxProfit(vector<int>& nums) {
        int min_buy = nums[0];
        int profit = 0;
        int max_profit = 0;
        int n = nums.size();
        for (int i = 1; i < n ; i++) {
            profit = nums[i] - min_buy;
            max_profit = max(profit, max_profit);
            min_buy = min(min_buy, nums[i]);
        }

        return max_profit;
    }
};
