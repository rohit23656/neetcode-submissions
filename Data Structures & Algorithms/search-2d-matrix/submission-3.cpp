class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m = matrix[0].size(),mid,index=0;
        //apply binary search on column
        int s=0,e=n-1;
        while(s<=e)
        {
             mid = s + (e-s)/2;
            if(matrix[mid][m-1]==target)
               return 1;
            else if(matrix[mid][m-1]>=target)
            {
                index = mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        s=0,e=m-1;
        while(s<=e)
        {
            int md = (s+e)/2;
            if(matrix[index][md]==target)
            return 1;
            else if(matrix[index][md]<target)
            s = md+1;
            else
            e = md-1;
        }
        return 0;

    }
};