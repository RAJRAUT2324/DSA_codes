class Solution {
public:
    bool issafe(vector<vector<int>> &maze, int row, int col, vector<vector<int>> &path, int newsc, int newsr) {
        if ((newsc >= 0 && newsc < col) && (newsr >= 0 && newsr < row) && (path[newsr][newsc] == 0 && maze[newsr][newsc] == 1)) {
            return true;
        } else {
            return false;
        }
    }

    vector<string> solve(vector<vector<int>> &maze, int row, int col, int sxc, int sxr, int dsc, int dsr, vector<vector<int>> &path, string output) {
        vector<string> ans;
        if (sxc == dsc && sxr == dsr) {
            ans.push_back(output);
            return ans;
        }

        int newsc, newsr;

        // up
        newsr = sxr - 1;
        newsc = sxc;
        if (issafe(maze, row, col, path, newsc, newsr)) {
            path[newsr][newsc] = 1;
            vector<string> temp = solve(maze, row, col, newsc, newsr, dsc, dsr, path, output + 'U');
            for (auto it : temp) ans.push_back(it);
            path[newsr][newsc] = 0;
        }

        // left
        newsr = sxr;
        newsc = sxc - 1;
        if (issafe(maze, row, col, path, newsc, newsr)) {
            path[newsr][newsc] = 1;
            vector<string> temp = solve(maze, row, col, newsc, newsr, dsc, dsr, path, output + 'L');
            for (auto it : temp) ans.push_back(it);
            path[newsr][newsc] = 0;
        }

        // right
        newsr = sxr;
        newsc = sxc + 1;
        if (issafe(maze, row, col, path, newsc, newsr)) {
            path[newsr][newsc] = 1;
            vector<string> temp = solve(maze, row, col, newsc, newsr, dsc, dsr, path, output + 'R');
            for (auto it : temp) ans.push_back(it);
            path[newsr][newsc] = 0;
        }

        // down
        newsr = sxr + 1;
        newsc = sxc;
        if (issafe(maze, row, col, path, newsc, newsr)) {
            path[newsr][newsc] = 1;
            vector<string> temp = solve(maze, row, col, newsc, newsr, dsc, dsr, path, output + 'D');
            for (auto it : temp) ans.push_back(it);
            path[newsr][newsc] = 0;
        }

        return ans;
    }

    vector<string> ratInMaze(vector<vector<int>> &maze) {
        int row = maze.size();
        int col = maze[0].size();
        vector<vector<int>> path(row, vector<int>(col, 0));
        path[0][0] = 1;
        int sxc = 0;
        int sxr = 0;
        int dsc = col - 1;
        int dsr = row - 1;
        string output = "";
        vector<string> ans = solve(maze, row, col, sxc, sxr, dsc, dsr, path, output);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// Rat in a Maze
// Difficulty: MediumAccuracy: 35.75%Submissions: 387K+Points: 4Average Time: 25m
// Consider a rat placed at position (0, 0) in an n x n square matrix maze[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

// The matrix contains only two possible values:

// 0: A blocked cell through which the rat cannot travel.
// 1: A free cell that the rat can pass through.
// Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
// If no path exists, return an empty list.

// Note: Return the final result vector in lexicographically smallest order.

// Examples:

// Input: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
// Output: ["DDRDRR", "DRDDRR"]
// Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
