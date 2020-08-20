class Solution {
public:
    void sortColors(vector<int>& nums) {
       // #1 : sort(nums.begin(),nums.end());
       // #2 : count 0s 1s 2s;
       // #3 : Dutch_flag_algorithm
        
        int l = 0;
        int mid = 0;
        int h = nums.size()-1;
        while(mid<=h)
        {
            if(nums[mid]==0)
            {
                swap(nums[l],nums[mid]);
                l++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[h]);
                h--;
            }
        }
        
        
    }
};
