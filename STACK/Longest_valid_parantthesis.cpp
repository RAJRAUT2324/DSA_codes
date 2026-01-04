class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};
276. Longest Valid Parentheses




Hard
0
Longest Valid Parentheses
The task is to determine the length of the longest substring of a given string s, composed only of the characters '(' and ')', that represents a well-formed sequence of parentheses.

A well-formed or valid parentheses sequence means every opening bracket '(' has a corresponding closing bracket ')', and they are correctly nested and ordered.