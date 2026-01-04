class Solution {
public:

    // Left boundary (excluding leaf nodes)
    void leftnode(Node* root, vector<int>& ans) {
        if (!root || (!root->left && !root->right))
            return;

        ans.push_back(root->data);

        if (root->left)
            leftnode(root->left, ans);
        else
            leftnode(root->right, ans);
    }

    // Leaf nodes
    void leafnode(Node* root, vector<int>& ans) {
        if (!root)
            return;

        if (!root->left && !root->right) {
            ans.push_back(root->data);
            return;
        }

        leafnode(root->left, ans);
        leafnode(root->right, ans);
    }

    // Right boundary (excluding leaf nodes)
    void rightnode(Node* root, vector<int>& ans) {
        if (!root || (!root->left && !root->right))
            return;

        if (root->right)
            rightnode(root->right, ans);
        else
            rightnode(root->left, ans);

        // add after recursion (reverse order)
        ans.push_back(root->data);
    }

    vector<int> boundaryTraversal(Node* root) {
        vector<int> ans;
        if (!root)
            return ans;

        // Root
        ans.push_back(root->data);

        // Left boundary
        leftnode(root->left, ans);

        // Leaf nodes
        leafnode(root->left, ans);
        leafnode(root->right, ans);

        // Right boundary
        rightnode(root->right, ans);

        return ans;
    }
};
Given a root of a Binary Tree, return its boundary traversal in the following order:

Left Boundary: Nodes from the root to the leftmost non-leaf node, preferring the left child over the right and excluding leaves.

Leaf Nodes: All leaf nodes from left to right, covering every leaf in the tree.

Reverse Right Boundary: Nodes from the root to the rightmost non-leaf node, preferring the right child over the left, excluding leaves, and added in reverse order.

Note: The root is included once, leaves are added separately to avoid repetition, and the right boundary follows travers


Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
Output: [1, 2, 4, 8, 9, 6, 7, 3] ////***** juat try dry run using these tree easy to undestand the tree */