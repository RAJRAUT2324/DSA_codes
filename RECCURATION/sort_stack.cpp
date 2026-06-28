class Solution {
  public:
  void ib(stack<int> &st,int val)
  {
      if(st.empty() || st.top()<=val)
      {
          st.push(val);
          return;
      }
      
      int value=st.top();
      st.pop();
      ib(st,val);
      st.push(value);
  }
  void empty(stack<int> &st)
  {
       if(st.empty()) return;
      int value=st.top();
      st.pop();
      empty(st);
      ib(st,value);
  }
    void sortStack(stack<int> &st) {
     empty(st);  
    }
};
