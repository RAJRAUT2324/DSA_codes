#include<algorithm>
bool isPalindrome(string s) {
    string r;
    char f=s[0];
    char e=s[s.length()-1];
    bool ans;
    if(f!=e)
    {
        ans=false;
    }
    r=s;
  reverse(r.begin(),r.end());
   if(s==r)
   {
    ans=true;
   }
    return ans;
}
// Check if a String is a Palindrome
// Given a string s, your task is to determine whether the string is a palindrome or not. A string is considered a palindrome if it reads the same forwards and backwards.

// For instance, the string "racecar" is a palindrome because it reads the same from left to right and right to left. Conversely, the string "hello" is not a palindrome due to the difference in the sequence when read in reverse.