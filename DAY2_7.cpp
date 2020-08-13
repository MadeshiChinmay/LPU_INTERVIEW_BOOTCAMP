class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int cnt=0;
        int s=0;
        mp[s]++;
        if(s==k)cnt++;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(mp.find(s-k)!=mp.end())cnt+=mp[s-k];
            mp[s]++;
        }
        if(k==0)cnt--;
        return cnt;
    }
};
