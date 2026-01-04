class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;
    int startingrow = 0;
    int startingcol = 0;
    int endingcol = n - 1;
    int endingrow = m - 1;
    while (startingrow <= endingrow && startingcol <= endingcol) {
      // startingrow
      for (int i = startingcol; i <= endingcol; i++) {
        ans.push_back(matrix[startingrow][i]);
      }
      startingrow++;
      // endingcol
      for (int i = startingrow; i <= endingrow; i++) {
        ans.push_back(matrix[i][endingcol]);
      }
      endingcol--;
      if (startingrow <= endingrow) { // endingrow
        for (int i = endingcol; i >= startingcol; i--) {
          ans.push_back(matrix[endingrow][i]);
        }
        endingrow--;
      }

      if (startingcol <= endingcol) {
        // startingrow
        for (int i = endingrow; i >= startingrow; i--) {
          ans.push_back(matrix[i][startingcol]);
        }
        startingcol++;
      }
    }
    return ans;
  }
};