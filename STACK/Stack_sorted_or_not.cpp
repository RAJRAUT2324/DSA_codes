#include <iostream>
#include <stack>
#include <climits>
using namespace std;
// it will work on the condition of the my own if stack is become empty
//while when we are poping element from the stack if it is sorted 
//so if stack not empty then the stack is not sorted
class Solution {
public:
    void sorted(stack<int>& st, int& prev)
    {
        // base case
        if (st.empty())
        {
            return;
        }

        int next = st.top();
        if (prev <= next)
        {
            prev = next;
            st.pop();
            sorted(st, prev);
        }
        else
        {
            return;
        }
    }

    bool isSorted(stack<int>& st) {
        int prev = INT_MIN;
        sorted(st, prev);

        if (st.empty())
            return true;
        else
            return false;
    }
};

int main() {
    Solution obj;

    stack<int> st;

    // change values to test
    st.push(3);
    st.push(5);
    st.push(1);   // top = 1 → 2 → 3

    if (obj.isSorted(st))
        cout << "Stack is sorted" << endl;
    else
        cout << "Stack is NOT sorted" << endl;

    return 0;
}
