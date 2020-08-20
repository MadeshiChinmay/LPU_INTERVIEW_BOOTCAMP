class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            if(dq.empty()) dq.push_back(i);
            else{
                while(dq.size() && nums[dq.back()]<=nums[i]) dq.pop_back();
                dq.push_back(i);
            }
        }
        
        v.push_back(nums[dq.front()]);
        
        for(int i=k;i<nums.size();i++)
        {
            while(dq.size() && dq.front()<=i-k) dq.pop_front();
            while(dq.size() && nums[dq.back()]<=nums[i]) dq.pop_back();
            dq.push_back(i);
            v.push_back(nums[dq.front()]);
        }
        return v;
    }
};
