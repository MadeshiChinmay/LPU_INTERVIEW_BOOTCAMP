#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool by(pair<int,int>& a,pair<int,int>& b)
    {
        if(a.first+a.second==b.first+b.second)
        {
            return a.first>b.first;
        }
        return a.first+a.second<b.first+b.second;
    }
    vector<pair<int,int>>vt;
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
                vt.push_back({i,j});
        }
        sort(vt.begin(),vt.end(),by);
        
        vector<int>ans;
        for(auto x:vt)
            ans.push_back(nums[x.first][x.second]);
        return ans;
    }
};
