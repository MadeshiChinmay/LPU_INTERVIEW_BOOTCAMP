class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<=31;i++)
        {
            int p = 1<<i;
            int cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                
                if(p&nums[j]   ) cnt++;
            }
            if(cnt%3) ans|=p;
        }
        return ans;
    }
};
