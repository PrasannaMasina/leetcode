class Solution {
public:
    int smallestNumber(int n) {
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            res = pow(2, i);
            if(res > n) return res-1;
        }
        return res;
    }
};