class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        //creating left max
        int mini = INT_MIN;
        for(int i=1;i<n;i++)
        {
           mini = max(mini,height[i-1]);
           leftMax[i] = mini;
        }
        //creating right max
        mini = INT_MIN;
        for(int i=n-2;i>=0;i--)
        {
             mini = max(mini,height[i+1]);
             rightMax[i] = mini;
        }

        int total = 0;
        for(int i=0;i<n;i++)
        {
            int mnheight = min(leftMax[i],rightMax[i]);
              if(mnheight > height[i] )
               total += mnheight - height[i];
        }
        return total;
    }
};
