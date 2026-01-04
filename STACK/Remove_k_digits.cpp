class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<char>st;
        for(int i=0;i<num.length();i++)
        {
            if(k>0)
            {
                while(!st.empty() && st.top()>num[i])
                {
                    st.pop();
                    k--;
                    if(k==0)
                    {
                        break;
                    }
                }
            }
            st.push(num[i]);
        }
        if(k>0)
        {
            while(!st.empty() && k)
            {
                st.pop();
                k--;
            }
        }
         while(!st.empty())
            {
                ans.push_back(st.top());
                k--;
                st.pop();
            }

            while(ans.size()>0 && ans.back()=='0')
            {
                ans.pop_back();
            }
          reverse(ans.begin(),ans.end());
          
          return ans == "" ? "0":ans;
    }
};
402. Remove K Digits
Solved
Medium
Topics
premium lock icon
Companies
Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

 

Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.