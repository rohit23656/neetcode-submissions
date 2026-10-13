class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxheight = height[0],leftMax = 0,rightMax = 0,index = 0,total = 0;
        // finding maxHeight building and its index
        for(int i=1;i<n;i++)
        {
            if(maxheight < height[i])
             {
                maxheight = height[i];
                index = i;
             }
        }
        //calculate left part water trapped
        for(int i=0;i<index;i++)
        {
            if(leftMax > height[i])
             total += leftMax - height[i];
             else
             leftMax = height[i];
        }
        //claculate right part me water trapped
        for(int i=n-1;i>index;i--)
        {
            if(rightMax > height[i])
            total += rightMax - height[i];
            else
            rightMax = height[i];
        }
        return total;
    }
};
