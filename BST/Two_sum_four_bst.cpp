class Solution {
public:
    void inorder_arr(TreeNode* root, vector<int>& arr)
    {
        if(root == NULL)
        {
            return;
        }

        inorder_arr(root->left, arr);
        arr.push_back(root->val);
        inorder_arr(root->right, arr);
    }

    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
        {
            return false;
        }

        vector<int> inorder;
        inorder_arr(root, inorder);

        int i = 0;
        int j = inorder.size() - 1;

        while(i < j)
        {
            int sum = inorder[i] + inorder[j];

            if(sum == k)
            {
                return true;
            }
            else if(sum < k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return false;
    }
};