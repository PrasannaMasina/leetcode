class Solution {
public:
    int reverseDegree(string s) {
        int res = 0;
        int temp = 0;
        for(int i = 0 ; i < s.size() ; i++){
            temp = (26-(int(s[i]-'a')))*(i+1);
            res += temp;
        }
        return res;
    }
};