#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define sint int32_t
#define int long long int
#define all(v) v.begin() , v.end()
#define vii vector<int>
#define pb push_back
#define pii pair<int,int>
#define F first
#define S second
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int arr[202];
int brr[202];
int dp[202][202];

int n , m;

// int solve(int i , int j)
// {
//     if(i == n) return 0;
//     int ans = 1e13;
//     if(~dp[i][j]) return dp[i][j];
//     for(int j)
// }



int32_t main()
{   fastio;

    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int j=0; j<m; j++)
        cin>>brr[j];

    for(int k = 0; k <= 1024; k++)
    {
        int fl = 0;
        for(int i=0; i<n; i++)
        {
            int pk = 0;
            for(int j = 0; j<m; j++)
            {
                int ans = arr[i]&brr[j];
                //cout<<ans<<" "<<k<<" "<<(ans|k)<<" "<<i<<" "<<j<<endl;
                if((ans|k) == k) {
                    pk = 1;
                    break;
                }
            }
            if(!pk) {
                fl = 1;
                break;
            }
        }
        if(fl) continue;
        cout<<k<<"\n";
        return 0;
    }

}
