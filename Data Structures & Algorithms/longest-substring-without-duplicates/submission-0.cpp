class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int right = 0;
        int left = 0;
        int len = 0;
        int max_l = 0;
        unordered_map<char, int> mpp;
        while (right < s.size()) {
            mpp[s[right]]++;

            while (mpp[s[right]] > 1) {
                mpp[s[left]]--;
                if (mpp[s[left]] == 0) mpp.erase(s[left]);
                left++;
            }
            max_l = max(max_l, right - left + 1);
            right++;
        }
        return max_l;
    }
};
