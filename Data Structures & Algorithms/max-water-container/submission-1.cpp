class Solution {
   public:
    int maxArea(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int product = 1;
        int max_prod = 0;
        int sq = 0;
        while (left < right) {
            sq = min(nums[left], nums[right]);
            product = sq * (right - left);
            max_prod = max(product, max_prod);

            if (nums[left] > nums[right])
                right--;
            else
                left++;
        }
        return max_prod;
    }
};
