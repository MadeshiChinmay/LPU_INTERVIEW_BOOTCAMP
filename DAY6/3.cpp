class Solution {
public:
void hf(vector<int> & nums,int s,vector<vector<int> > &ans)
{
if(s == nums.size())
{
ans.push_back(nums);
return;
}
for(int i=s ; i<=nums.size()-1 ; i++)
{
swap(nums[s],nums[i]);
hf(nums,s+1,ans);
swap(nums[i],nums[s]);
}
}
vector<vector<int> > permute(vector<int> & nums) {
vector<vector<int> > ans;
hf(nums,0,ans);
return ans;
}
};
