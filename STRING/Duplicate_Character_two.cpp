class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans="";
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push({s[i],++count});
            }
            else if(s[i]!=st.top().first)
            {
                count=0;
                st.push({s[i],++count});
            }
            else
            {
                count=st.top().second;
                st.push({s[i],++count});
            }
            if(st.top().second>=k)
            {
                    for(int j=0;j<k;j++)
                    {
                        st.pop();
                    }
                count=0;
            }
            
        }
        while(!st.empty())
        {
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
 return ans;
    }
};
1209. Remove All Adjacent Duplicates in String II