class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total_sum = 0;
        int flag = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            total_sum += arr[i];
        }
        if(total_sum%3 != 0) return false;
        int part_sum = total_sum/3;
        int sum = 0;
        int cnt = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            if(sum == part_sum){
                cnt++;
                sum = 0;
            }
            if (cnt == 2 && i < arr.size() - 1) {
                return true;
            }
        }
        if(cnt == 3) return true;
        return false;
    }
};