#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define pb push_back
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
#define nl '\n'
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , k;
        cin>>n>>k;
        int ans=1e13;
        for(int i=1; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                int j=n/i;
                if(j <= k)
                {
                    ans=min(ans , n/j);
                }
                if(i <= k)
                {
                    ans=min(ans , n/i);
                }
            }
        }
        cout<<ans<<nl;
    }

}
