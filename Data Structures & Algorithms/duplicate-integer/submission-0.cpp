class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> value;
        bool duplicate_Found = false;
        for(unsigned int i = 0; i < nums.size();i++){
            auto [iterator, inserted] = value.try_emplace(nums.at(i),0);
            if(!inserted){
                return true;
            }
        }
        return false;
    }
};