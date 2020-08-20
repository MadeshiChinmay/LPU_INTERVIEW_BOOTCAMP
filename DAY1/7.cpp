class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        if(s.length()==1)
            return 1;
        map<char,int>m;
        int ans=0;
        int x=-1;//clear??
        for(int i=0;s[i];i++)
        {
            if(m.find(s[i])!=m.end())
            {
                x = max(m[s[i]],x);
            }
            ans=max(abs(i-x),ans);
            m[s[i]] = i;
        }
        return ans;
    }
};
