class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int rem = 0;
        int cnt = 0;
        while(n){
            rem = n%10;
            if(num%rem == 0) cnt++;
            n/=10;
        }
        return cnt;
    }
};