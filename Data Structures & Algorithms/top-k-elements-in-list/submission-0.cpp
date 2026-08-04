class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> freqMap = {};
        std::multimap<int, int, std::greater<int>> topMap = {};
        vector<int> result; 
        for (const auto& num: nums){
            if(freqMap.find(num) == freqMap.end()){
                freqMap.insert({num, 1});
            }else{
                freqMap[num]++;
            }
        }
        for (const auto& [num, freq] : freqMap) {
            topMap.insert({freq, num});
        }
        auto it = topMap.begin();
        for (int i = 0; i < k; ++i) {
            result.push_back(it->second);
            it++;
        }
        return result;
    }
};
