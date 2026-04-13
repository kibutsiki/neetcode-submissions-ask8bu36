class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int index = 0, streak = 0, curr = nums[0], highest = 0;

        while(index < nums.size()){
            if(nums[index] != curr){
                curr = nums[index];
                streak = 0;
            }

            while(index < nums.size() && nums[index] == curr){
                index++;
            }
            streak++;
            curr++;
            highest = max(highest, streak);
        } 
        
        return highest;
    }
};
