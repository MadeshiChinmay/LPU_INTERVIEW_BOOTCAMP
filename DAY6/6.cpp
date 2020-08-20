class Solution {
public:
    string getPermutation(int n, int k) {
        int fact[n+2];
        fact[0]=1;
        vector<char>v;
        for(int i=1;i<=n;i++)
        {
            fact[i]=fact[i-1]*i;
            v.push_back((char)(i+'0'));
        }
        string ans;
        for(int i=1;i<=n;i++)
        {
           int x=ceil(1.0*k/fact[n-i]);
            k=k%fact[n-i];
            if(k==0)
                k=fact[n-i];
            ans+=v[x-1];
            v.erase(v.begin()+(x-1)); 
        }
        return ans;
    }
};
