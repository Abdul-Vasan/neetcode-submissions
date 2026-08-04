class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, vector<int> > sumMap = {};
        int sum;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                sum = nums[i] + nums[j];
                if (sumMap.find(sum) == sumMap.end()){
                    sumMap.insert({sum, std::vector<int>({i, j}) });
                }
            }
        }

        return sumMap[target];

    }
};
