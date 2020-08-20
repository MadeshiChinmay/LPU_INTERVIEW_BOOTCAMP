class Solution {
public:
    vector<string>v;
    void solve(int n,string t)
    {
        if(t.length()==n){
            v.push_back(t);
            return;
        }
        for(auto x:{'a','b','c'})
        {
            if(t.size()==0)
            {
                t+=x;
                solve(n,t);
                t.pop_back();
                continue;
            }
            if(x!=t.back())
            {
                t+=x;
                solve(n,t);
                t.pop_back();
            }
        }
        return;
    }
    string getHappyString(int n, int k) {
        solve(n,"");
        
        if(k>v.size())return "";
        return v[k-1];
    }
};
