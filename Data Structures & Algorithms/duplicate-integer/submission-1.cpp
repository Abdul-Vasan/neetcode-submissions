class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, bool> cntMap = {};
        for(const auto& x : nums){
            if (cntMap.find(x) == cntMap.end()) {
                cntMap.insert({x, true});
            } else {
                return true;
            }
        }
        return false;
    }
};