#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(vector<vector<int>>& matrix) {
        // Write your code here
        int cnt = 0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1)
                {
                    if(i-1<0)cnt++;
                    if(i+1>=matrix.size())cnt++;
                    if(j-1<0)cnt++;
                    if(j+1>=matrix[0].size())cnt++;
                    if(i-1>=0 && matrix[i-1][j]==0) cnt++;
                    if(j-1>=0 && matrix[i][j-1]==0) cnt++;
                    if(i+1<=matrix.size()-1 && matrix[i+1][j]==0) cnt++;
                    if(j+1<=matrix[0].size()-1 && matrix[i][j+1]==0) cnt++;
                }
            }
        }
        return cnt;
    }
};
