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
{   fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n *= 2;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        vector<int>odd;
        vector<int>even;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 == 0)even.pb(i);
            else odd.pb(i);
        }
        if(odd.size()%2 == 1 && even.size()%2 == 1) {
            odd.pop_back();
            even.pop_back();
            for(int i=0; i<even.size(); i++)
            {
                if(i%2 == 0) {
                    cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
                }
            }
            for(int i=0; i<odd.size(); i++)
            {
                if(i%2 == 0) {
                    cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
                }
            }

        }
        else {
            if(even.size() >= 2) {
                even.pop_back();
                even.pop_back();
            }
            else if(odd.size() >= 2) {
                odd.pop_back();
                odd.pop_back();
            }

            for(int i=0; i<even.size(); i++)
            {
                if(i%2 == 0) {
                    cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
                }
            }
            for(int i=0; i<odd.size(); i++)
            {
                if(i%2 == 0) {
                    cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
                }
            }
        }

    }
}
