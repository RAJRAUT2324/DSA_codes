#include<map>
#include<algorithm>
class Solution {
public:
   string mapPattern(string pattern)
   {
    map<char,char>mapping;
    char start='a';
    for(int i=0;i<pattern.length();i++)
    {
        char ch=pattern[i];
        if(mapping.find(ch)==mapping.end())
        {
            mapping[ch]=start;
            start++;
        }
    }
    string s="";
    for(int i=0;i<pattern.length();i++)
    {
        char ch=pattern[i];
        s.push_back(mapping[ch]);
    }
    return s;
   }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            if(mapPattern(words[i])==mapPattern(pattern))
            {
                ans.push_back(words[i]);
            }
        }
     return ans;
    }
};

// Input
// words = ["abc", "deq", "mee", "aqq", "dkd", "ccc"] pattern = "abb"

// Output
// ["mee", "aqq"]