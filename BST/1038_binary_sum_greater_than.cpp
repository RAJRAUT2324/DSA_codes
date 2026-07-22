class Solution {
public:
    void inorder(TreeNode* root, vector<int>& arr)
    {
        if(root == NULL)
            return;

        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

    void update(TreeNode* root, unordered_map<int,int>& mp)
    {
        if(root == NULL)
            return;

        update(root->left, mp);
        root->val = mp[root->val];
        update(root->right, mp);
    }

    TreeNode* bstToGst(TreeNode* root) {

        vector<int> arr;
        inorder(root, arr);

        unordered_map<int,int> mp;

        int sum = 0;
        for(int i = arr.size()-1; i >= 0; i--)
        {
            sum += arr[i];
            mp[arr[i]] = sum;
        }

        update(root, mp);

        return root;
    }
};