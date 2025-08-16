class Solution {
public:
    int maximum69Number (int num) {
        vector<int>temp;
        while(num > 0){
           temp.push_back(num%10);
           num/=10;
        }
        reverse(temp.begin(), temp.end());
        int flag = 0;
        int res = 0;
        for(int i = 0 ; i < temp.size() ; i++){
            if(temp[i] == 6 && flag == 0){
                 res = res*10+9;
                 flag = 1;
            }
            else res = res*10+temp[i];
        }
        return res;
    }
};