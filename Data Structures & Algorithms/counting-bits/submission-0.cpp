class Solution {
public:
int countSetBit(int x)
{
    int cnt = 0;
    while(x)
    {
        if(x&1)
        cnt++;
        x = x>>1;
    }
    return cnt;
}
    vector<int> countBits(int n){
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(countSetBit(i));
        }
        return v;
    }
};
