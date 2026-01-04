class Solution {
public:
    string factorial(int N) {
        vector<int> result;
        result.push_back(1); // 0! = 1! = 1

        for (int i = 2; i <= N; i++) {
            int carry = 0;

            for (int j = 0; j < result.size(); j++) {
                int temp = result[j] * i + carry;
                result[j] = temp % 10;
                carry = temp / 10;
            }

            while (carry > 0) {
                result.push_back(carry % 10);
                carry /= 10;
            }
        }

        // Convert vector<int> to string (in reverse order)
        string ans = "";
        for (int i = result.size() - 1; i >= 0; i--) {
            ans += (result[i] + '0');
        }
        return ans;
    }
};

// Given an integer N, compute the factorial of N. The factorial of a number N is defined as the product of all positive integers less than or equal to N. As the value of N grows, the factorial of N can be a very large number. To accommodate this, you should return the factorial as a string to handle large outputs.

// Your task is to implement the function to compute the factorial of N as a string.

// Example 1:

// Input:

// N = 0
// Output:

// 1
// Explanation:By definition, the factorial of 0 equals 1.