class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(st.size()==1 && s[i]==')')
            {
                st.pop();
                s[i]='0';
            }
            else
            {
                st.pop();
            }
           if(st.size()==1 && s[i]=='(')
           {
            s[i]='0';
           }
        
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
1021. Remove Outermost Parentheses