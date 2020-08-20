class Solution {
public:
    vector<int> distributeCandies(int candies, int nums) {
        vector<int>v(nums,0);
        int cnt = 1;
        
        int i=0;
        int n = nums;
        while(candies!=0)
        {
            if(candies<=cnt){
                v[i] += candies;
                break;
            }
            v[i]+=cnt;
            candies-=cnt;
            cnt++;
            i++;
            i%=n;
        }
        return v;
    }
};
