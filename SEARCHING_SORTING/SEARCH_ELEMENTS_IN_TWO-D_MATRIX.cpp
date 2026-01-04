class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int s=0;
        int e=total-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            int rowIndex=mid/col;
            int colIndex=mid%col;
            if(matrix[rowIndex][colIndex]==target)
            {
                return true;
            }
            if(matrix[rowIndex][colIndex]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        // element not exists return false
        return false;
    }
};
// Search an Element in a 2D Matrix
// matrix = [[1, 4, 7, 11, 15],
//           [2, 5, 8, 12, 19],
//           [3, 6, 9, 16, 22],
//           [10, 13, 14, 17, 24],
//           [18, 21, 23, 26, 30]]
// target = 5
//row=mid/column
//column=mid%column
//row=matrix.size();
//column=matrix[0].size()