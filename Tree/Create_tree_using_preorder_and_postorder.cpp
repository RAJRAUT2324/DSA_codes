class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& postorder, int postStart, int postEnd) {

        if (preStart > preEnd)
            return NULL;

        TreeNode* root = new TreeNode(preorder[preStart]);

        // Only one node
        if (preStart == preEnd)
            return root;

        // Left child
        int leftRoot = preorder[preStart + 1];

        // Find left subtree size
        int idx = mp[leftRoot];
        int leftSize = idx - postStart + 1;

        root->left = build(preorder,
                           preStart + 1,
                           preStart + leftSize,
                           postorder,
                           postStart,
                           idx);

        root->right = build(preorder,
                            preStart + leftSize + 1,
                            preEnd,
                            postorder,
                            idx + 1,
                            postEnd - 1);

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder,
                                   vector<int>& postorder) {

        int n = preorder.size();

        for (int i = 0; i < n; i++)
            mp[postorder[i]] = i;

        return build(preorder, 0, n - 1,
                     postorder, 0, n - 1);
    }
};