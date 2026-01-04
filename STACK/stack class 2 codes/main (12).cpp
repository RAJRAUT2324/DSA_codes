class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            //opening bracket -> push
            if(ch == '(' || ch =='[' || ch=='{') {
                //insert 
                st.push(ch);
            }
            else {
                //closing bracket
                //match 
                //not match
                //pre-check -> stack empty
                if(st.empty()) {
                    //not match 
                    return false;
                }
                if(ch==')' && st.top()!='(') {
                    //no match
                    return false;
                }
                else if(ch=='}' && st.top()!='{') {
                    return false;
                }
                else if(ch==']' && st.top()!='[') {
                    return false;
                }
                else {
                    //match
                    st.pop();
                }
            }
        }

        //yaha pr main galti karta hu , ya karti hu 
        //ye bhul jaata hu 
        // if(s.empty()) {
        //     //iska matlab saare bracket cancel out hogye successfully
        //     return true;
        // }
        // else {
        //     //cancel out hogye but still something is left in the stack 
        //     return false
        // }

        return st.empty();

    }
};