class Solution {
public:
    int findRowIndex(vector<vector<int>>& mat,int c,int r,int m)
    {
        int max=INT_MIN;
        int index=-1;
        for(int i=0;i<r;i++)
        {
            if(mat[i][m]>max)
            {
                max=mat[i][m];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int col=mat[0].size();
        int row=mat.size();
        int s=0;
        int e=col-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            int rowIndex=findRowIndex(mat,col,row,mid);
            int left=mid-1>=0 ? mat[rowIndex][mid-1] : INT_MIN;
            int right=mid+1<col ? mat[rowIndex][mid+1] : INT_MIN;
            if(mat[rowIndex][mid]>left && mat[rowIndex][mid]>right)
            {
                return {rowIndex,mid};
            }
            else if (mat[rowIndex][mid]<left )
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return{};
    }
};
// Input: mat = [[1,4],[3,2]]
// Output: [0,1]
// Explanation: Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.s