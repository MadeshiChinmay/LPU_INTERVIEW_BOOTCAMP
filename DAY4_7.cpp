class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int p = 0;
        for(auto x:nums) p ^= x;
        
        //int x = 0;
        int cnt=0;
        int a=0;
        int b=0;
        for(int i=0;i<32;i++){
            if((1<<i)&p) cnt=i;
        }
        for(auto x:nums){
            if(x&(1<<cnt)) a^=x;
            else b^=x;
        }
        
        
        return {a,b};
    }
};
