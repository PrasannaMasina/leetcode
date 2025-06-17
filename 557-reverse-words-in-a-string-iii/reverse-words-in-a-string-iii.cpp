class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string res = "";
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i+1] == ' '){
                temp += s[i];
                reverse(temp.begin(), temp.end());
                res = res + temp;
                res = res + ' ';
                temp = "";
                i++;
            }
            else temp += s[i];
        }
        temp += s[s.size()-1];
        reverse(temp.begin(), temp.end());
        res = res + temp;
        return res;
    }
};