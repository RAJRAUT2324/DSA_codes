class Solution {
public:
    string removeOccurrences(string s, string part) {
       while(s.find(part)!=-1) //agar null nahi hai to loop mai jayega
       {
        s.erase(s.find(part),part.length());//erase the portion of the 
        //string
       }
       return s;
    }
};
// Example 1:

// Input: s = "ababcab", part = "ab"
// Output: "c"
// Explanation:
// First, remove "ab" from "ababcab", resulting in "abcab".
// Remove "ab" again from "abcab", resulting in "cab".
// Finally, remove "ab" from "cab", leaving "c".