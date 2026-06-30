class Solution {
public:
    bool solve(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        while(start < end)
        {
            if(arr[start] != arr[end])
                return false;

            start++;
            end--;
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;

        vector<vector<int>> arr;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
            vector<int> temp;

            for(int i = 0; i < n; i++)
            {
                TreeNode* front = q.front();
                q.pop();

                if(front)
                {
                    temp.push_back(front->val);

                    // Push both children even if NULL
                    q.push(front->left);
                    q.push(front->right);
                }
                else
                {
                    temp.push_back(-101);   // NULL marker
                }
            }

            arr.push_back(temp);
        }

        bool ans = true;

        for(int i = 0; i < arr.size(); i++)
        {
            ans = ans && solve(arr[i]);
        }

        return ans;
    }
};