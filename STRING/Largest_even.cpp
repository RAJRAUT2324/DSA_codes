class Solution {
public:
    string largestEven(string s) {
        if(s.length()==0)
        {
            return s;
        }
        for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='2')
                {
                    return s;
                }
                else
                {
                    s.pop_back();
                }
            }
        return s;
    }
};
Q1. Largest Even Number
Solved
Easy
3 pt.
You are given a string s consisting only of the characters '1' and '2'.

You may delete any number of characters from s without changing the order of the remaining characters.

Return the largest possible resultant string that represents an even integer. If there is no such string, return the empty string "".

 

Example 1:

Input: s = "1112"

Output: "1112"

Explanation:

The string already represents the largest possible even number, so no deletions are needed.

Example 2:

Input: s = "221"

Output: "22"

Explanation:

Deleting '1' results in the largest possible even number which is equal to 22.©leetcode