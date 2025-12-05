class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt = 0;
        int left_sum = 0;
       for(int i = 0 ; i < nums.size()-1 ; i++){
           left_sum += nums[i];
           int right_sum = 0;
           for(int j = i+1 ; j < nums.size() ; j++){
               right_sum += nums[j];
           }
           cout<<left_sum<<" "<<right_sum<<endl;
           if(abs(left_sum-right_sum)%2 == 0) cnt++;
       } 
        return cnt;
    }
};