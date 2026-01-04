class Solution {
  public:
    bool checkRedundancy(string &s) {
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
     if(ch=='(' ||ch=='+' ||ch=='-' ||ch=='/' || ch=='*')
     {
         st.push(ch);
     }
     else if(ch==')')
     {
         bool ans=false;
         while(!st.empty() && st.top()!='(')
         { 
             char ch1=st.top();
             if(ch1=='+' ||ch1=='-' ||ch1=='/' || ch1=='*')
             {
                 ans=true;
             }
             st.pop();
         }
         if(ans==false)
         {
             return true;
         }
         else
         {
             st.pop();
         }
     }
    }
     //agar yaha tak pahuch gaya to samazo ki
     //rebundant nahi hhia
     return false;
     
    }
};
Given a string of balanced expression s, check if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present.

Examples:

Input: s = "((a+b))"
Output: true 
Explanation: ((a+b)) can reduced to (a+b).
Input: s = "(a+(b)/c)"
Output: true
Explanation: (a+(b)/c) can reduced to (a+b/c) because b is surrounded by () which is redundant.
