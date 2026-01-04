class Solution {
public:
    bool check(string goal, string rotate)
    {
        bool ans = true;
        if (rotate == goal)
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
        return ans;
    }

    bool rotateString(string s, string goal) {
        int n = s.length();
        bool final = false;
        string ans = "";
        int k = 0;
        string original = s;   
        while (k < n)
        {
            ans = "";    
            for (int i = 0; i < k; i++)
            {
                ans.push_back(original[i]);
            }
            string temp = "";
            for (int i = k; i < n; i++)
            {
                temp.push_back(original[i]);
            }
            temp += ans; 
            if (check(goal, temp))
            {
                final = true;
                break;
            }

            k++;
        }
        return final;
    }
};
// 796. Rotate String
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
 

// Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:

// Input: s = "abcde", goal = "abced"
// Output: false
 