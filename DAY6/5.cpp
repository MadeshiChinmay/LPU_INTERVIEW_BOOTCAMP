class Solution {
public:
    set<vector<int>> uniqueSoln;
    vector<vector<int>> finalSoln;
    void fun1(vector<int> &nums, int target, int index,vector<int> &temp){
        if(target == 0){
            uniqueSoln.insert(temp);
        }
        if(target<0){
            return;
        }
        if(index >=nums.size()){
            return;
        }
        //INCLUDE
        temp.push_back(nums[index]);
        fun1(nums,target-nums[index],index+1,temp);
        temp.pop_back();
        //IGNORE
        fun1(nums,target,index+1,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> vp;
        sort(nums.begin(),nums.end());
        fun1(nums,target,0,vp);
        for(auto &it : uniqueSoln){
            finalSoln.push_back(it);
        }
        return finalSoln;
    }
};
