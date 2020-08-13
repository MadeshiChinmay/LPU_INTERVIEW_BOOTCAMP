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

int32_t main()
{   fastio;

    // int t;
    // cin>>t;
    // while(t--)
    {
        int n;
        cin>>n;
        vii arr(n);
        //multiset<int>mt;

        for(auto&i:arr) cin>>i;

        int cnt_inv = 0 ;

        sort(all(arr));

        int cnt = 1;
        for(int i=0; i<n; i++)
        {
            if(arr[i] >= cnt) cnt++;
        }

        cout<<cnt-1<<"\n";




    }

}
