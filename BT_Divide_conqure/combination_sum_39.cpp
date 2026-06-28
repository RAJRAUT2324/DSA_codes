class Solution {
public:
    void solve(vector<vector<int>>& res, vector<int>& curr, vector<int>& c, int target, int index) {
        if (target == 0) {
            res.push_back(curr);
            return;
        }

        if (index >= c.size() || target < 0) return;

        // Take current element
        curr.push_back(c[index]);
        solve(res, curr, c, target - c[index], index); // reuse same element
        curr.pop_back();

        // Skip current element
        solve(res, curr, c, target, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(res, curr, candidates, target, 0);
        return res;
    }
};