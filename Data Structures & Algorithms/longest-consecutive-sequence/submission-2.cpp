class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = INT_MIN;
        if(nums.size()==0) return 0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto it : s)
        {
            if(s.find(it-1)==s.end())
            {
                int x = it;
                int cnt = 1;
                while(s.find(x+1)!=s.end())
                {
                    x = x+1;
                    cnt++;
                }
                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};
