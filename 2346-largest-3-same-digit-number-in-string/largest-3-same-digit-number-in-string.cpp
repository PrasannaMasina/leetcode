class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int max_num = 0;
        for(int i = 0 ; i < num.size()-2 ; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                if(int(num[i]) > max_num){
                    res="";
                    res+=num[i];
                    res+=num[i+1];
                    res+=num[i+2];
                    max_num = int(num[i]);
                }
            }
        }
        return res;
    }
};