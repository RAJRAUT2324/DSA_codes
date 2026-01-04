#include<algorithm>
class Solution {
public:
    string removeDuplicates(string s) {
        // Placeholder for logic to remove adjacent duplicates
        stack<char>st;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(!st.empty() && st.top()==s[i])
            {
              st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        if(st.empty())
        {
            return "";
        }
        else{
            while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

s = "abbaca"
Output:


"ca"