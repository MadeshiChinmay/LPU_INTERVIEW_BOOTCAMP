class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            int op=arr[i];
            for(int j=i+1;j<arr.size();j++)
            {
                op^=arr[j];
                if(op==0)
                {
                    if(j-i+1>=2){
                        cnt+=j-i;
                    }
                }
            }
        }
        return cnt;
    }
};
