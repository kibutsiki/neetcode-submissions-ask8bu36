class Solution {
public:
    bool hasDuplicate(const std::vector<int>& nums) {
        std::map<int,int> m;
        for (int x : nums) {
            auto [it, inserted] = m.try_emplace(x, 0);
            if (!inserted) return true;   // already existed
            // no need to increment at all for this problem
        }
        return false;
    }
};