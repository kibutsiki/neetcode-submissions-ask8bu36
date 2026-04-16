class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size()-1;
        while(start < end){
            if(numbers.at(start) + numbers.at(end) == target){
                return {start+1, end+1};
            }
            if(numbers.at(start) + numbers.at(end) < target){
                start++;
            }
            else{
                end--;
            }
        }

        return {};
    }
};
