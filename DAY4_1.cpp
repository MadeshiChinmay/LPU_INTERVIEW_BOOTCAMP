class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        int n=arr.size();
        int fr[n];
        fr[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            fr[i]=arr[i]^fr[i-1];
        }
        int bc[n];
        bc[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            bc[i]=arr[i]^bc[i+1];
        }
        
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            int x = 0;
            if(l-1>=0) x = fr[l-1];
            int y = 0;
            if(r+1<=n-1) y = bc[r+1];
            int t = fr[n-1];
            v.push_back(x^y^t);
        }
        return v;
        
    }
};
