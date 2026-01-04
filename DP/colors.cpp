class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long long a = 6;  // ABA
        long long b = 6;  // ABC

        for (int i = 2; i <= n; i++) {
            long long newA = (a * 3 + b * 2) % MOD;
            long long newB = (a * 2 + b * 2) % MOD;
            a = newA;
            b = newB;
        }

        return (a + b) % MOD;
    }
};
1411. Number of Ways to Paint N × 3 Grid
Solved
Hard
Topics
premium lock icon
Companies
Hint
You have a grid of size n x 3 and you want to paint each cell of the grid with exactly one of the three colors: Red, Yellow, or Green while making sure that no two adjacent cells have the same color (i.e., no two cells that share vertical or horizontal sides have the same color).

Given n the number of rows of the grid, return the number of ways you can paint this grid. As the answer may grow large, the answer must be computed modulo 109 + 7.

 

Example 1:


Input: n = 1
Output: 12
Explanation: There are 12 possible way to paint the grid as shown.
Example 2: