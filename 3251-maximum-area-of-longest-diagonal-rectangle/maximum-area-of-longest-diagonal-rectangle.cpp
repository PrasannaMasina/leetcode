class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonalSq = 0; 
        int maxArea = 0;
        
        for (int i = 0; i < dimensions.size(); i++) {
            int w = dimensions[i][0];
            int h = dimensions[i][1];
            
            int diagonalSq = w * w + h * h;
            int area = w * h;
            
            if (diagonalSq > maxDiagonalSq || 
               (diagonalSq == maxDiagonalSq && area > maxArea)) {
                maxDiagonalSq = diagonalSq;
                maxArea = area;
            }
        }
        
        return maxArea;
    }
};
