class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          map<string, vector<string>> mapping;
      vector<vector<string>> arr;
       for(auto str : strs)
       {
        string s=str;
        sort(s.begin(),s.end());
        mapping[s].push_back(str);
       }
       for(auto it=mapping.begin();it!=mapping.end();it++)
       {
         vector<string> group = it->second;
            sort(group.begin(), group.end()); 
            arr.push_back(group);

       }
          sort(arr.begin(), arr.end(), [](const vector<string>& a, const vector<string>& b) {
            return a[0] < b[0];
        });
       return arr;
    }
};

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]