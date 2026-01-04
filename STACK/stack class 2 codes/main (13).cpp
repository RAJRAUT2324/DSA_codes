class Solution {
  public:
    int checkRedundancy(string s) {
        
        stack<char> st;
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            
            if(ch == '(' || ch=='+' || ch=='-' || ch=='*' || ch=='/') {
                st.push(ch);
            }
            else if(ch==')') {
                bool operatorFound = false;
                
                while(!st.empty() && st.top()!='(') {
                    char value = st.top();
                    if(value=='+' || value=='-' || value=='*' || value=='/') {
                        operatorFound = true;
                    }
                    st.pop();
                }
                
                if(operatorFound == false) {
                    return true;
                }
                else {
                    //bracket non-redundant 
                    //opening bracket ko remove krnah 
                    st.pop();
                }
                
            }
            
        }
        //agar yaha tak aagye -> iska matlaab
        //no redundant bracket
        return false;
        
    }
};
