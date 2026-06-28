class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
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