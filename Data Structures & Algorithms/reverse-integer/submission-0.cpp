class Solution {
public:
    int reverse(int x){
        int n = abs(x);
        long long rev = 0;
        while(n>0)
        {
            int rem = n%10;
            rev = rev*10 + rem;
            n/=10;
        }
         
    // यदि रिवर्स किया गया नंबर int की सीमा से बाहर चला गया है
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0; // standard competitive programming practice
    }
        if(x<0)
        return -rev;
        else
        return rev;
    }
};
