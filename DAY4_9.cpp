class Solution {
public:
        long int rangeBitwiseAnd(long int m,long  int n) {
        long int ans=0;
        for(int i=0;i<=31;i++)
        {
            long long int j = 1ll<<i;
            if((n>>j == m>>j) && (m>>j)%2==1 && abs(n-m)<=j)
            {
                ans += j;
            }
        }
        return ans;
    }
    
};
