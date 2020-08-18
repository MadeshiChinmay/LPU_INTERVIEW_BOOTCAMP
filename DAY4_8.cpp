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

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    if(n == 1) {
        cout<<arr[0]*arr[0]<<endl;
        return 0;
    }

    sort(arr , arr+n);

    int bit[32]= {};
    for(int i=0; i<n; i++) {
        for(int j=0; j <32; j++) {
            if((1ll<<j)&arr[i])bit[j]++;
        }
    }
    for(int i=n-1; i >= 0; i--) {
        for(int j=0; j<32; j++) {
            if(bit[j] > 0) {
                if( ((1ll<<j)&arr[i]) == 0) arr[i] +=(1ll<<j);
                bit[j]--;
            }
            else if(bit[j] == 0) {
                if( ((1ll<<j)&arr[i]) != 0) {
                    arr[i] -=(1ll<<j);
                }
            }
        }
    }
    int sum=0;
    for(int i=0; i<n; i++)sum += arr[i]*arr[i];
    cout<<sum<<endl;
}
//
