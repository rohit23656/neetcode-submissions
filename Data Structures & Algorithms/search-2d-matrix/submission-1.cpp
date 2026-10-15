class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m = matrix[0].size(),mid;
        int s = 0,e = m*n-1;
        while(s<=e)
        {
             mid = s + (e-s)/2;
            int rowindx = mid/m;
            int colindx = mid%m;
            if(matrix[rowindx][colindx] == target)
              return 1;
            else if(matrix[rowindx][colindx]<target)
               s = mid+1;
            else 
               e = mid-1;

        }
        return 0;

    }
};
