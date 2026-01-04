class Solution {
  public:
    bool isPalindrome(string& s) {
       string reverse=s;
       int i=0;
       int j=s.length()-1;
       while(i<=j)
       {
           swap(s[i],s[j]);
           i++;
           j--;
       }
        if(s==reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
        return true;
    }
};
// Input: s = "abba"
// Output: true
// Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.