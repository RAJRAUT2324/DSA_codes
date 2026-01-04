class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr;
        int carry = 1;   // start with +1

        for (int i = digits.size() - 1; i >= 0; i--) {
            int ans = digits[i] + carry;
            arr.push_back(ans % 10);
            carry = ans / 10;
        }

        if (carry) {
            arr.push_back(carry);
        }

        reverse(arr.begin(), arr.end());
        return arr;
    }
};
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].