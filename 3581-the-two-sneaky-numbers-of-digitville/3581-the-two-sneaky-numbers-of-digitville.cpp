class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[i] == nums[j]){
                    res.push_back(nums[j]);
                    break;
                }
            }
        }
        return res;
    }
};