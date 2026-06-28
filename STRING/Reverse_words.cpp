class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans1;
        string ans;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(ans!="")   
                {
                    st.push(ans);
                    ans="";
                }
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        if(ans.length()!=0) st.push(ans);

        while(!st.empty())
        {                                           ///sloved by me
            ans1 += st.top();
            st.pop();

            if(!st.empty()) ans1 += " ";   
        }

        return ans1;
    }
};
151. Reverse Words in a String