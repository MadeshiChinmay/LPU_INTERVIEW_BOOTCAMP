class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(i<=j) swap(matrix[i][j],matrix[j][i]);   
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            int l = 0;
            int r = matrix[i].size()-1;
            while(l<=r)
            {
                swap(matrix[i][l++],matrix[i][r--]);
            }
        }
    }
};
