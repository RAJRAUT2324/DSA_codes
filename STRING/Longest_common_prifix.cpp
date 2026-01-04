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