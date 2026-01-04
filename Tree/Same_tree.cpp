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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(p && !q) return false;
        if(!p && q) return false;
        if(p->val!=q->val) return false;
        bool a1=isSameTree(p->left,q->left);
        bool a2=isSameTree(p->right,q->right);
        return a1 && a2;
    } 
};

Code
Testcase
Testcase
Test Result
100. Same Tree
Solved
Easy
Topics
premium lock icon
Companies
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 