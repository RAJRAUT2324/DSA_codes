class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        // handle special cases OUTSIDE loop
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1}, {1,1}};

        ans.push_back({1});
        ans.push_back({1,1});

        while(ans.size() < numRows) {
            vector<int> temp;
            vector<int> old = ans.back();

            temp.push_back(1);
            for(int i = 0; i < old.size() - 1; i++) {
                temp.push_back(old[i] + old[i + 1]);
            }
            temp.push_back(1);

            ans.push_back(temp);
        }

        return ans;
    }
};
