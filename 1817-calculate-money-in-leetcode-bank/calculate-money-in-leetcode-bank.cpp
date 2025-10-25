class Solution {
public:
    int totalMoney(int n) {
        vector<int>money(n);
        money[0] = 1;
        int sum = money[0];
        for(int i = 1 ; i < n ; i++){
            if(i%7 == 0) money[i] = i/7+1;
            else money[i] = (money[i-1]+1);
            sum += money[i];
        }
        return sum;
    }
};