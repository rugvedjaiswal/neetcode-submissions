class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min_buy = nums[0];
        int max_p= 0;
        for(int i = 1;i<nums.size();i++){
        int profit = nums[i] - min_buy;
        min_buy = min(min_buy,nums[i]);
         max_p = max(max_p,profit);
        }
        return max_p;
    }
};
