class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        vector<int>arr;
        arr.push_back(1);
        arr.push_back(2);
        for(int i = 2 ; i < n ; i++) arr.push_back(arr[i-1]+arr[i-2]);
        return arr[n-1];
     
    }
};