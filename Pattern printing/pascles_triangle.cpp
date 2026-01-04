class Solution {
public:
    void printPascalsTriangle(int n) {
        for (int row = 0; row < n; row++) {
            // Print leading spaces for alignment
            for (int space = 0; space < n - row - 1; space++) {
                cout << " ";
            }

            int num = 1;
            for (int col = 0; col <= row; col++) {
                cout << num << " ";
                num = num * (row - col) / (col + 1);  // Update to next value
            }
            cout << endl;
        }
    }
};


//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
//  Pascal’s Triangle Pattern