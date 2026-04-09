class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> values;
        for(int i=0; i < nums.size();i++){
            int sum = target - nums.at(i);
            if(auto location = values.find(nums.at(i)); location != values.end()){
                return {location->second, i};
            }
            values.insert({sum, i});
        }
        return {};
    }
};
