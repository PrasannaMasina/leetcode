class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        int rem = 0;
        while(numBottles >= numExchange){
            rem = numBottles%numExchange;
            numBottles /= numExchange;
            res += numBottles;
            numBottles += rem;
            cout << numBottles << " " << res << endl;
        }
        return res;
    }
};