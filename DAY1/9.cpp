class Solution {
public:
int firstMissingPositive(vector<int>& nums)
{
int n=nums.size();
int i;

    for(i=0;i<n;)
    {
        if(nums[i]<=0 || nums[i]>n)
        {
            nums[i]=0;
            i++;
        }
        else if(nums[i]==i+1)
            i++;
        else
        {
            if(nums[nums[i]-1]==nums[i])
                nums[i]=0;
            else
                swap(nums[i],nums[nums[i]-1]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
            return i+1;
    }
    return n+1;
}
};
