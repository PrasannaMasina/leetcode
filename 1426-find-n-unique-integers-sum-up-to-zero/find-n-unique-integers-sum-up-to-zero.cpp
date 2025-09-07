class Solution {
public:
    vector<int> sumZero(int n) {
       int num = n/2;
       vector<int>res;
       for(int i = 0 ; i < n/2 ; i++){
        res.push_back(num);
        res.push_back(num*-1);
        num--;
       }
       if(res.size() != n) res.push_back(0);
       sort(res.begin(), res.end());
       return res; 
    }
};