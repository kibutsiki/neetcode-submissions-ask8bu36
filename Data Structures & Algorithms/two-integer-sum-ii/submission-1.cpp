class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size()-1;
        int mid = start + (end - start) / 2;
        int sum = numbers.at(mid);
        int i = 0;
        while(i < end){
            cout << mid;
            if(numbers.at(i) + numbers.at(end) == target){
                return {i+1, end+1};
            }
            if(numbers.at(i) + numbers.at(end) < target){
                i++;
            }
            else{
                end--;
            }
        }

        return {};
    }
};
