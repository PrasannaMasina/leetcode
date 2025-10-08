class Solution {
public:
    int binarysearch(int key, vector<int>& potions, long long check){
        int low = 0;
        int high = potions.size()-1;
        int mid;
        int cnt = 0;
        while(low <= high){
            mid = (low+high)/2;
            long long mul = static_cast<long long>(potions[mid])*key;
            if(mul >= check){
                cnt += high-mid+1;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return cnt;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>res;
        for(int i = 0 ; i < spells.size() ; i++){
            int cnt = binarysearch(spells[i], potions, success);
            res.push_back(cnt);
        }
        return res;
    }
};