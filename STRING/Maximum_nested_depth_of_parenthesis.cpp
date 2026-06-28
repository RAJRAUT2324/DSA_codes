#include<algorithm>
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')')
            {
                ans=max(ans,(int)st.size());
                st.pop();
            }
            i++;
        }
        return ans;
    }
};
1614. Maximum Nesting Depth of the Parentheses