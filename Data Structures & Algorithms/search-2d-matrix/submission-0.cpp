class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m = matrix[0].size();
        int j = 0, i = n-1;
        while(j<m && i>=0)
        {
            if(matrix[i][j]==target)
              return 1;
            else if(matrix[i][j]<target)
             j++;
             else
             i--;
        }
        return 0;

    }
};
