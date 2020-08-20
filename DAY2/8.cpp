class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v;
        map<char,int>mp;
        for(auto x:s)mp[x]++;
        for(auto x:mp)
        {
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string t = "";
        for(int i=0;i<v.size();i++)
        {
            while(v[i].first--)
                t+=v[i].second;
        }
        return t;
    }
};
