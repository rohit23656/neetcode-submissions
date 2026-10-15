class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mincost = prices[0];
        int n = prices.size(),mini=0;
        for(int i=1;i<n;i++)
        {
            if(mincost>prices[i])
            {
                mincost = prices[i];
            }
            else
            {
                mini = max(mini,prices[i]-mincost);
            }
        }
        return mini;
    }
};
