class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int,int> value;
        bool duplicate_Found = false;
        for(unsigned int i = 0; i < nums.size();i++){
            if(++value[nums.at(i)] > 1){
                return true;
            }
        }
        return false;
    }
};