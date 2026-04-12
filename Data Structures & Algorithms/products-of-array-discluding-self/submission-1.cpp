class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret;
        int product = 1, num_zero = 0;
        for(int i=0; i < nums.size();i++){
            if(nums[i] != 0){
                product *= nums[i];
            }    
            else{
                num_zero++;
            }
        }
        if(num_zero > 1){
            return vector<int>(nums.size(), 0);
        }

        for(int i=0; i < nums.size();i++){
            if(num_zero > 0){
                if(nums[i] == 0){
                    ret.push_back(product);
                }
                else{
                ret.push_back(0);
                }
            }
            else{
                ret.push_back(product/nums[i]);
            }
        }

        return ret;
    }
};
