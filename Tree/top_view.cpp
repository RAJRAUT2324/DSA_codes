class Solution {
  public:
    vector<int> topView(Node *root) {

        if(root == NULL) return {};

        queue<pair<Node*, int>> q;
        unordered_map<int, Node*> mp;

        int minDist = 0;
        int maxDist = 0;

        q.push({root, 0});

        while(!q.empty()) {

            auto f = q.front();
            q.pop();

            Node* node = f.first;
            int hd = f.second;

            minDist = min(minDist, hd);
            maxDist = max(maxDist, hd);

            if(mp.find(hd) == mp.end()) {
                mp[hd] = node;
            }

            if(node->left)
                q.push({node->left, hd - 1});

            if(node->right)
                q.push({node->right, hd + 1});
        }

        vector<int> ans;

        for(int i = minDist; i <= maxDist; i++) {
            ans.push_back(mp[i]->data);
        }

        return ans;
    }
};