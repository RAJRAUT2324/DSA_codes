class Solution {
  public:
    vector<int> wavePrintMatrix(vector<vector<int>>& matrix, int m, int n) {
      vector<int>arr;
     for(int i=0;i<n;i++)
     {
      if((i & 1)==0)
      {
        for(int j=0;j<m;j++)
        {
          arr.push_back(matrix[j][i]);
        }
      }
      else
      {
        for(int j=m-1;j>=0;j--)
        {
          arr.push_back(matrix[j][i]);
        }
      }
     }
     return arr;
    }
};
// Input:

// m=3 n=3 matrix=[[1,2,3],[4,5,6],[7,8,9]]
// Output:

// 1 4 7 8 5 2 3 6 9
// Explanation:Wave order (col-wise): 1 4 7 ↓, then 8 5 2 ↑, then 3 6 9 ↓.