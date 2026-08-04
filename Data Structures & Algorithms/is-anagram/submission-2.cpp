class Solution {
public:    
    bool isAnagram(string s, string t) {
        std::map<int, int> sMap;
        std::map<int, int> tMap;
        if (s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); ++i) {
            if (sMap.find(s[i]) == sMap.end()) {
                sMap.insert({s[i], 1});
            } else {
                sMap[s[i]]++ ;
            }

            if (tMap.find(t[i]) == tMap.end()) {
                tMap.insert({t[i], 1});
            } else {
                tMap[t[i]]++ ;
            }
        }

        return (sMap == tMap); 
    }
};
