class Solution {
public:
    int trap(vector<int>& h) {
        if(h.empty()) return 0;
        int n = h.size();
        int left[n];//For storing right max
        int right[n];// For storing left max
        left[0] = h[0];
        right[n-1] = h[n-1];
        //int curr[n];
        
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],h[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],h[i]);
        }
        int total_water = 0;
        for(int i=1;i<n-1;i++)
        {
            total_water += max(min(left[i],right[i]) - h[i],0);
        }
        return total_water;
    }
};
