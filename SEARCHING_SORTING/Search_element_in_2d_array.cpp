class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        int r = 0;
        int c = m - 1;
        
        while (r < n && c >= 0) {
            if (mat[r][c] == x)
                return true;
            else if (mat[r][c] > x)
                c--;      // move left
            else
                r++;      // move down
        }
        return false;
    }
};
Search in a Row-Column Sorted
//here we have to consider that we have to apply  search but,
//here full matrix not be sorted its half sorted means every row,
//and colum is sorted not any sorted like linear search


//on leetcode 240 2d matrix 2