class Solution {
public:
int checkPalidrome(string s,int i,int j)
{   int count=0;
    while(i>=0 && j<=s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
     
    return count;
}
    int countSubstrings(string s) {
         int count =0;
         for(int center=0;center<s.length();center++)
         {
            int i=center;
            int j=center;
            int odd=checkPalidrome(s,i,j);
            i=center;
            j=center+1;
            int even=checkPalidrome(s,i,j);
            count+=odd+even;
         } 
         
         return count;
    }
};
// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

 

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".