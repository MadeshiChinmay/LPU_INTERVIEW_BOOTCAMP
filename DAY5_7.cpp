#include<bits/stdc++.h>
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define int  long long
#define pb push_back
#define pii pair<int,int>
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
bool sortbysec(const pair<string,int> &a, const pair<string,int> &b){if(a.first==b.first)return a.second<b.second; return a.first<b.first;}

void dfs(int parent,int root,int cnt,map<int,vector<int>>&m,map<int,int>&distance)
{
	//cout<<root<<endl;
	if(m[root].size()==1 && root!=1){
		//cout<<root<<endl;
		distance[root]+=cnt;
		return;
	}
	//int cnt=0;
	for(auto x:m[root])
	{
		if(x!=parent)
		{
			//cout<<x<<endl;
			dfs(root,x,cnt+1,m,distance);
		}
	}
} 
int32_t main()
{
	// int n;
	// cin>>n;
	// n--;
	// int temp_n=n;
	// map<int,vector<int>>m;
	// map<int,int>distance;
	// while(temp_n--)
	// {
	// 	int u,v;
	// 	cin>>u>>v;
	// 	m[u].pb(v);
	// 	m[v].pb(u);
	// }
	// // for(auto x:m)
	// // {
	// // 	cout<<x.F<<" "<<"size()"<<" "<<m[x.F].size()<<" : ";
	// // 	for(auto y:x.S)
	// // 		cout<<" "<<y;
	// // 	cout<<endl;
	// // }
	// //cout<<endl;
	// dfs(0,1,0,m,distance);
	// //cout<<endl;
	// float sum=0;
	// for(auto x:distance){
	// 	//cout<<x.F<<" "<<x.S<<endl;
	// 	if(x.F==1)continue;
	// 	sum+=x.S;
	// }
	// int d=distance.size();
	// if(distance.find(1)!=distance.end())d--;
	// sum/=float(d);
	// cout<<setprecision(7)<<sum<<endl;
	
	int r;
	cin>>r;
	int x=1;
	while(x*x<=r)
	{	
		if(((r-(x*x)-x-1)/(2*x))*(2*x)==(r-(x*x)-x-1) && (r-(x*x)-x-1)>0)
		{
			cout<<x<<" "<<(r-(x*x)-x-1)/(2*x)<<endl;
			return 0;
		}
		x++;
	}
	cout<<"NO"<<endl;

}
