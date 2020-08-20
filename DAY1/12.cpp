#include<bits/stdc++.h>
using namespace std;
long long max(long long a,long long b)
{
    if(a>b)return a;
    return b;
}
class Solution {
public:
    int maxArea(int n, int m, vector<int>& h, vector<int>& v) {
        sort(v.begin(),v.end());
        sort(h.begin(),h.end());
        long long int ans=0;
        long long int mh=0;
        long long int vh=0;
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            {
                vh=max(v[0],vh);
            }
            if(i==v.size()-1)
            {
                vh=max(vh,m-v[i]);
            }
            if(i>0)
            {
                vh=max(vh,v[i]-v[i-1]);
            }
        }
        for(int i=0;i<h.size();i++)
        {
            if(i==0)
            {
                mh=max(h[0],mh);
            }
            if(i==h.size()-1)
            {
                mh=max(mh,n-h[i]);
            }
            if(i>0)
            {
                mh=max(mh,h[i]-h[i-1]);
            }
        }
        return ans = ((vh%1000000007)*(mh%1000000007))%1000000007;
    }
};
