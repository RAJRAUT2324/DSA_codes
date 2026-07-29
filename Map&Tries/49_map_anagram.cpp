class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string original = strs[i];
            string arrange = original;

            sort(arrange.begin(), arrange.end());

            mp[arrange].push_back(original);
        }

        vector<vector<string>> arr;

        for (auto x : mp) {
            arr.push_back(x.second);
        }

        return arr;
    }
};