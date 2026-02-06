class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>zc(col,0);
        vector<int>zr(row,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    zc[j]=1;
                    zr[i]=1;
                }
            }
        }
         for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(zc[j] || zr[i])
                {
                   matrix[i][j]=0;
                }
            }
        }
    }
};
Set Matrix Zeroes