class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;

        for(char c : s)
        {
            st.push(c);

            if(st.size() >= part.size())
            {
                string temp = "";

                // take last part.size() chars
                for(int i = 0; i < part.size(); i++)
                {
                    temp.push_back(st.top());
                    st.pop();
                }

                reverse(temp.begin(), temp.end());

                if(temp != part)
                {
                    for(char x : temp)
                        st.push(x);
                }
            }
        }

        string ans = "";

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// another method
class Solution {
public:
    string removeOccurrences(string s, string part) {
       while(s.find(part)!=-1) //agar null nahi hai to loop mai jayega
       {
        s.erase(s.find(part),part.length());//erase the portion of the 
        //string
       }
       return s;
    }
};