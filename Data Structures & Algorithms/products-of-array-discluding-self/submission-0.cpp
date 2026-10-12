class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int cnt0 = 0,n = nums.size();
          int mul = 1;
          int index = -1;
          for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    index = i;
                    break;
                }
            }
          for(int i=0;i<n;i++)
            {
                if(i!=index)
              mul *= nums[i];
            }
          for(int i=0;i<n;i++)
          {
            if(nums[i]==0)
             cnt0++;
          } 
          if(cnt0==0)
          {
            for(int i=0;i<n;i++)
            {
                nums[i]= mul/nums[i];
            }
          }
          else if(cnt0==1)
          {
             for(int i=0;i<n;i++)
             {
                if(i!=index)
                 nums[i] = 0;
                else
                  nums[i] = mul;
             }
          }
          else{
            for(int i=0;i<n;i++)
            {
                nums[i] = 0;
            }
          }
          return nums;
    }
};
