class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        
        for(auto&y:strs)
        {
            string x = y;
            sort(x.begin(),x.end());
            mp[x].push_back(y);
        }
        
        vector<vector<string>> ans;
        for(auto x:mp)
        {
            vector<string>temp = x.second;
            ans.push_back(temp);
        }
        return ans;
        
    }
};
