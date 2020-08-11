class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int mx = arr[0];
        int cnt = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>mx){
                mx = arr[i];
                cnt=1;
            }
            else{
                cnt++;
            }
            if(cnt==k) return mx;
        }   
        return mx;
    }
};
