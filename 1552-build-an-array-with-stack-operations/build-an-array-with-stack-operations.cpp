class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int i = 0;
        int num = 1;
        while(i < target.size()){
            if(target[i] == num){
                i++;
                res.push_back("Push");
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
            }
            cout << i << " ";
            num++;
        }
        return res;
    }
};