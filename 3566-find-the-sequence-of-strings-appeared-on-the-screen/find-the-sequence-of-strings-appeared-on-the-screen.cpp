class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>seq;
        string res = "";
        for(int i = 0 ; i < target.size() ; i++){
            res += "a";
            while(res[i] != target[i]){
                seq.push_back(res);
                res[i] = char(res[i])+1;
            }
            seq.push_back(res);
        }
        return seq;
    }
};