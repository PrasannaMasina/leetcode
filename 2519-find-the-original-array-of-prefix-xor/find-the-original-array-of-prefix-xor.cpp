class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       if(pref.size() == 1) return pref;
       int n = pref.size();
       vector<int>res(n);
       res[0] = pref[0];
       for(int i = 1 ; i < n ; i++){
        res[i] = (pref[i-1]^pref[i]);
       }
       return res;
    }
};