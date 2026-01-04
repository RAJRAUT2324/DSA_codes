class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;

        // Process first window
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // Answer for first window
        if (dq.empty())
            ans.push_back(0);
        else
            ans.push_back(arr[dq.front()]);

        // Process remaining windows
        for (int i = k; i < arr.size(); i++) {

            // Remove elements out of window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Add current element if negative
            if (arr[i] < 0) {
                dq.push_back(i);
            }

            // Add answer for current window
            if (dq.empty())
                ans.push_back(0);
            else
                ans.push_back(arr[dq.front()]);
        }

        return ans;
    }
};
// Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
// Output: [-8, 0, -6, -6]
// Explanation:
// Window [-8, 2] First negative integer is -8.
// Window [2, 3] No negative integers, output is 0.
// Window [3, -6] First negative integer is -6.
// Window [-6, 10] First negative integer is -6.