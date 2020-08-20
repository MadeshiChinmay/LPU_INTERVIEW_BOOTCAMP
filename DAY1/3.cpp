class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            if(cursum<0)cursum=0;
            maxsum=max(maxsum,cursum);
        }
        if(maxsum==0)return *max_element(nums.begin(),nums.end());
        return maxsum;
    }
};
