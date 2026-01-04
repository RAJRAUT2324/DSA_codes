class Solution {
public:
int solve(vector<vector<int>>& mat,int sum,int target,int row)
{
    if(row==mat.size())
    {
        return abs(target-sum);
    }
    int mini=INT_MAX;
    for(int i=0;i<mat[0].size();i++)
    {
        int Rans=solve(mat,sum+mat[row][i],target,row+1);
        mini=min(Rans,mini);
    }
    return mini;
}
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int sum=0,row=0;
        int ans=solve(mat,sum,target,row);
        return ans;
    }
};

// Input: mat = [[1,2,3],[4,5,6],[7,8,9]], target = 13
// Output: 0
// Explanation: One possible choice is to:
// - Choose 1 from the first row.
// - Choose 5 from the second row.
// - Choose 7 from the third row.
// The sum of the chosen elements is 13, which equals the target, so the absolute difference is 0.