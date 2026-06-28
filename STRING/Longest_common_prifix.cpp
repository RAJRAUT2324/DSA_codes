class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        int i=0;
        string s="";
        while(true)
        {
            char current_ch=0;
            for(auto str:strs)
            {
                if(i>=str.length())
                {
                    current_ch=0;
                    break;
                }
                if(current_ch==0)
                {
                    current_ch=str[i];
                }
                else if(current_ch!=str[i])
                {
                    current_ch=0;
                    break;
                }
            }
            if(current_ch==0)
            {
                break;
            }
           s.push_back(current_ch);
           i++;
        }
        return s;
    }
};
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string ans="";
        string f=strs[0];
        for(int i=0;i<f.length();i++)
        {
            bool val=false;
            for(int j=1;j<strs.size();j++)
            {
                string temp=strs[j];
                if(f[i]==temp[i])
                {
                    val=true;
                }
                else
                {
                    val=false;
                    break;
                }
            }
            if(val)
            {
                ans.push_back(f[i]);
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
Longest Common Prefix