class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mps;
        unordered_map<char,int>mpt;
        for(auto ch : s){
            mps[ch]++;
        }
        for(auto j:t){
            mpt[j]++;
        }
        if(mps == mpt)return true;
        else return false;
    }
};
