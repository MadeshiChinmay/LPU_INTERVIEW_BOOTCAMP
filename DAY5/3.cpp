#include<bits/stdc++.h>
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;

#define int long long
#define pb push_back
#define pii pair<int,int>
#define ppii pair<pii,pii>
#define fr(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
#define ccM 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
long double pi = 3.14159265358979323;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int max(int b,int a){if(b>a)return b;else return a;}
int min(int b,int a){if(b<a)return b;else return a;}
int Abs(int b){return max(b,-b);}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return a.second<b.second;}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            cout<<2;
            for(int i=1;i<=n-1;i++)
                cout<<9;
        }
        cout<<endl;
    }
}
