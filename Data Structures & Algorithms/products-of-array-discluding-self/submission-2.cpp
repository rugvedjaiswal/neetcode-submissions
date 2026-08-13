class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left_product = 1;

        vector<int> ans(nums.size());
        vector<int> ans1(nums.size());

        int n = nums.size() - 1;

        for (int i = n; i >= 0; i--) {
            ans[i] = left_product;
            left_product *= nums[i];
        }

        int right_product = 1;

        for (int i = 0; i <= n; i++) {
            
            ans1[i] = right_product * ans [i];
            right_product *=nums[i];
        }

        return ans1;
    }
};
