class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>res_set;
        for(int i = 0 ; i < nums1.size() ; i++){
            for(int j = 0 ; j < nums2.size() ; j++){
                if(nums1[i] == nums2[j]){
                    res_set.insert(nums1[i]); 
                    break;
                }
            }
        }

        vector<int>res;
        for(auto itr: res_set){
            res.push_back(itr);
        }
        return res;
    }
};