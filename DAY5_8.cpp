#include<bits/stdc++.h>
//#include<boost/lexical_cast.hpp>
#include<map>
#include<unordered_map>
using namespace std;
#define ll unsigned long long
#define mk make_pair
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
//#define 10e7 1000000007
vector<int> SieveOfEratosthenes(int n)
{
    vector <int> v;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++) {
       if (prime[p]){
          v.pb(p);
       }
    }
    return v;

}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
   int n1=0;
   int n2=0;
   fr(i,n)
   {
       if(arr[i]==1)
        n1++;
       else
        n2++;
   }
    vector <int> v=SieveOfEratosthenes(300000);
   //cout<<n1<<" "<<n2<<endl;
   int presum=0;
   int i=0;
   while(1)
   {
       int d=v[i]-presum;
       while(d>=2 && n2>0)
           {
               d-=2;
               cout<<2<<" ";
               n2--;
               presum+=2;
           }
       while(d>=1 && n1>0)
           {
               cout<<1<<" ";
               n1--;
               d--;
               presum++;
           }
       i++;
       if(n1==0 && n2==0)
        break;
   }






}
