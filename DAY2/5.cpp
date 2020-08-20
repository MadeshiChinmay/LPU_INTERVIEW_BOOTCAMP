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

    int n;
    cin>>n;
    vii arr(n);
    map<int , int>mp;
    set<pii>s;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        s.insert({-x.S , x.F});
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        int x;
        cin>>c>>x;

        if(c == '+')
        {
            if(mp.count(x))
            {
                int j = mp[x];
                s.erase({-j , x});
                mp[x]++;
                s.insert({-mp[x] , x});
            }
            else {
                mp[x]++;
                s.insert({-mp[x] , x});
            }
        }
        else
        {
            int j = mp[x];
            s.erase({-j , x});
            mp[x]--;
            if(mp[x] == 0) {
                s.erase({0 , x});
                mp.erase(x);
            }
            else s.insert({-mp[x] , x});
        }

        int fl = 0;

        if(s.size() == 1)
        {
            int p = -(s.begin()->F);
            if(p >= 8) fl=1;
        }
        if(s.size() == 2)
        {
            int a = -(s.begin()->F);
            int b = -(s.rbegin()->F);
            int c = max(a , b);
            if(a == c)
            {
                a -= 4;
                if((a >= 2&&b >= 2) || a >= 4 || b>= 4) fl=1;
            }
            if(b == c)
            {
                b -= 4;
                if((a >= 2&&b >= 2) || a >= 4 || b>= 4) fl=1;
            }
        }
        if(s.size() > 2)
        {
            int a , b , c;
            set<pii>::iterator it = s.begin();
            a = -(it->F);
            it++;
            b = -(it->F);
            it++;
            c = -(it->F);
            if(a >= 4)
            {
                a -= 4;
                if((a >= 2&&b >= 2) || (b >= 2 && c >= 2) || c >= 4 || (a >= 2 && c >= 2) || a >= 4 || b>= 4) fl=1;
            }
            if(b >= 4)
            {
                b -= 4;
                if((a >= 2&&b >= 2) || (b >= 2 && c >= 2) || c >= 4 || (a >= 2 && c >= 2) || a >= 4 || b>= 4) fl=1;
            }
            if(c >= 4)
            {
                c -= 4;
                if((a >= 2&&b >= 2) || (b >= 2 && c >= 2) || c >= 4 || (a >= 2 && c >= 2) || a >= 4 || b>= 4) fl=1;
            }
        }

        if(fl) cout<<"YES\n";
        else cout<<"NO\n";





    }




}
