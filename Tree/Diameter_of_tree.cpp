/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

 int maxDepth(TreeNode* root) {
        //base case
        if(root==NULL)
        {
            return 0;
        }
        int lefth=maxDepth(root->left)+1;
        int righth=maxDepth(root->right)+1;

        int ans=max(lefth,righth);
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        //base case
        if(root==NULL)
        {
            return 0;
        }
        int option1=maxDepth(root->left)+maxDepth(root->right);
        int option2=diameterOfBinaryTree(root->left);
        int option3=diameterOfBinaryTree(root->right);
        int ans=max(option1,max(option2,option3));
        return ans;
    }
};

Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

 

Example 1:


Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].