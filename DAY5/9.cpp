#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds; 
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define MX              200005
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int pwmd(int a,int n)
{
    if(!n)
        return 1;
    int pt = pwmd(a,n/2);
    pt*=pt,pt%=mod;
    if(n&1)
        pt*=a,pt%=mod;
    return pt;
}

int32_t main()
{
    c_p_c();
    int x,n; cin>>x>>n;

    set<int> prm;

    for(int i=2;i*i<=x;++i)
    {
    	if(!(x%i))
    	{
    		prm.insert(i);
    		while(!(x%i))
    			x/=i;
    	}
    }

    if(x>1)
    	prm.insert(x);

    int ans=1;

    for(auto el : prm)
    {
    	int p = 0;
    	int num=n;

    	while(num)
    		p += num/el,num/=el;

    	ans *= pwmd(el,p);
    	ans %= mod;
    }

    cout<<ans<<'\n';


    return 0;
}
