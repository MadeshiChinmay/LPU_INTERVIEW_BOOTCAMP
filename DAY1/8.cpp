#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int sum(long long int n)
    {
        long long d =  ((n)*(n+1))/2;
        return d;
    }
    long long int numTimesAllBlue(vector<int>& v) {
        long long int n = v.size();
        long long int x = 0;
        long long int count = 0;
        for(int i=0;i<n;i++)
        {
            x+=v[i];
            long long int p = i+1;
            if(sum(p)==x)count++;
        }
        return count;
    }
};
