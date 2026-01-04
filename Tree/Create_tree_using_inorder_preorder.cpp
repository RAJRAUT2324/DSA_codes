class Solution {
public:
    int get(int element, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            if (element == inorder[i]) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,
                    int ins, int ine, int& preIndex) {
        if (preIndex >= preorder.size() || ins > ine) {
            return NULL;
        }

        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);

        int pos = get(element, inorder);

        root->left  = solve(preorder, inorder, ins, pos - 1, preIndex);
        root->right = solve(preorder, inorder, pos + 1, ine, preIndex);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        return solve(preorder, inorder, 0, inorder.size() - 1, preIndex);
    }
};

Code
Testcase
Testcase
Test Result
105. Construct Binary Tree from Preorder and Inorder Traversal
Solved
Medium
Topics
premium lock icon
Companies
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

 

Example 1:


Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: preorder = [-1], inorder = [-1]
Output: [-1]
 

Constraints