class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;
// es question me hame chote element ko negative karake - krana hai
// in the odd case
// positive me just sum return karana hai
//hum row ccolum kitni bhi bar change kar sakate hai 
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                int val = matrix[i][j];
                if (val < 0) negCount++;
                sum += abs(val);
                minAbs = min(minAbs, abs(val));
            }
        }

        if (negCount % 2 == 1) {
            sum -= 2 * minAbs;
        }

        return sum;
    }
};
You are given an n x n integer matrix. You can do the following operation any number of times:

Choose any two adjacent elements of matrix and multiply each of them by -1.
Two elements are considered adjacent if and only if they share a border.

Your goal is to maximize the summation of the matrix's elements. Return the maximum sum of the matrix's elements using the operation mentioned above.

 

Example 1:


Input: matrix = [[1,-1],[-1,1]]
Output: 4
Explanation: We can follow the following steps to reach sum equals 4:
- Multiply the 2 elements in the first row by -1.