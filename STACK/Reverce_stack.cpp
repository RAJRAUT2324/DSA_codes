class Solution {
  public:
  void insertatBottom(stack<int>& st, int x)
  {
      int top=st.size()-1;
      //base case
      if(st.empty())
      {
          st.push(x);
          return;
      }
      //1 case hum solve karange
      int topval=st.top();
      st.pop();
      insertatBottom(st,x);
      st.push(topval);
      
  }
    void reverseStack(stack<int> &st) {
       //base case 
       if(st.empty())
       {
           return;
       }
       int val=st.top();
       st.pop();
       reverseStack(st);
       insertatBottom(st,val);
        
    }
};

You are given a stack st[]. You have to reverse the stack.

Examples:

Input: st[] = [1, 2, 3, 4]
Output: [1, 2, 3, 4]
Explanation: After reversing, the elements of stack are in opposite order.