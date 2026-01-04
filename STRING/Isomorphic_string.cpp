#include<unordered_map>
class Solution {
public:
string code(string s)
{
    string str=s;
    unordered_map<char,char>mapping;
    int n=str.size();
    char start='a';
    string ans;
    for(auto ch:str)
    {
        if(mapping.find(ch)==mapping.end())
        {
          mapping[ch]=start;
          start++;
        }
    }
    //check
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        str[i]=mapping[ch];
        ans.push_back(str[i]);
    }
    return ans;
}
    bool isIsomorphic(const string& s, const string& t) {
       string s1=code(s);
       string s2=code(t);
       if(s1==s2)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
};
//Example 1:

// Input: s = "paper", t = "title"
// Output: true
// Example 2:

// Input: s = "ab", t = "aa"
// Output: false