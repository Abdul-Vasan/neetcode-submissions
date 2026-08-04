class Solution {
public:
    std::map<char, int> createMap (string str){
        std::map<char, int> strMap = {};
        for(int i = 0; i < str.length(); i++){
            if (strMap.find(str[i]) == strMap.end()){
                strMap.insert({str[i], 1});
            } else {
                strMap[str[i]]++ ; 
            }
        }

        return strMap;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map < std::map<char, int>, vector<string>> grpMap = {};
        vector<vector<string>> output;
        for (const auto& str : strs){
            if(grpMap.find(createMap(str)) == grpMap.end()){
                grpMap.insert({createMap(str), std::vector{str}});
            }else{
                grpMap[createMap(str)].push_back(str);
            }
        }
        for(const auto& [key, value] : grpMap){
            output.push_back(value);
        }
        return output;
    }
};
