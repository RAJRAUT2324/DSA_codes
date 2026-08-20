class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        vector<string> arr;
        if(s.size()<10)
        {
            return arr;
        }

        // Sliding window of size 10
        for (int i = 0; i + 10 <= s.size(); i++) {
            string sub = s.substr(i, 10);
            mp[sub]++;
        }

        for (auto x : mp) {
            if (x.second > 1) {
                arr.push_back(x.first);
            }
        }

        return arr;
    }
};