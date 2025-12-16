class Solution {
public:
    int maxArea(vector<int>& height) {
        int ht_low = 0;
        int ht_high = height.size()-1;
        int max_area = min(height[ht_low], height[ht_high])*abs(ht_low-ht_high);
        while(ht_low < ht_high){
            int area = min(height[ht_low], height[ht_high])*abs(ht_low-ht_high);
            if(area > max_area) max_area = area;
            if(height[ht_low] <= height[ht_high]) ht_low++;
            else ht_high--;
    
        }
        return max_area;
    }
};