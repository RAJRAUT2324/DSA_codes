/**
 * Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};
 */
class Solution {
public:
    void solve(queue<TreeNode*>& q, vector<pair<int,int>>& ans) {
        int level = 1;
        int sum = 0;

        while (!q.empty()) {
            TreeNode* fro = q.front();
            q.pop();

            if (fro == NULL) {
                ans.push_back({sum, level});
                level++;
                sum = 0;

                if (!q.empty())
                    q.push(NULL);
            } else {
                sum += fro->val;

                if (fro->left)
                    q.push(fro->left);
                if (fro->right)
                    q.push(fro->right);
            }
        }
    }

    int maxLevelSum(TreeNode* root) {
        if (root == NULL)
            return -1;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<pair<int,int>> ans;

        solve(q, ans);

        int maxSum = INT_MIN;
        int level = 1;

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i].first > maxSum) {
                maxSum = ans[i].first;
                level = ans[i].second;
            }
        }
        return level;
    }
};
1161. Maximum Level Sum of a Binary Tree
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.

Return the smallest level x such that the sum of all the values of nodes at level x is maximal.

 

Example 1:


Input: root = [1,7,0,7,-8,null,null]
Output: 2
Explanation: 
Level 1 sum = 1.
Level 2 sum = 7 + 0 = 7.
Level 3 sum = 7 + -8 = -1.
So we return the level with the maximum sum which is level 2.