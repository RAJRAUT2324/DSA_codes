class Solution {
public:
    void sortedInsert(stack<int> &st, int x) {

        vector<int> arr;  
        while (!st.empty()) {
            int ans = st.top();
            arr.push_back(ans);
            st.pop();
        }
        arr.push_back(0);
        int i;
        for ( i = arr.size() - 2; i >= 0; i--) {
            if (x >= arr[i]) {
                arr[i+1] = x;
                break;
            } else {
                arr[i + 1] = arr[i];
            }
        }

          if (i < 0) arr[0] = x;

        for (int i = arr.size() - 1; i >= 0; i--) {
            st.push(arr[i]);
        }
    }
};
Example 1:
Input:
stack = [5, 4, 2, 1] (Top of stack is 1)
x = 3
Output Stack:
[5, 4, 3, 2, 1]