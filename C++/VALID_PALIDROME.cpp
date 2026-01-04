class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        string p;
        bool ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
        if((s[i]>='a' && s[i]<='z'  ) || (s[i]>=0 && s[i]<=9))
        {
          r.push_back(s[i]);

        }
       
    }
    p=r;
    reverse(p.begin(),p.end());
     if(r==p)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
// Valid Palindrome
// Given a string s, your task is to determine if it is a valid palindrome. A string is considered a palindrome if it reads the same backward as forward after removing all non-alphanumeric characters and converting all letters to lowercase.

// A valid palindrome ignores case and any character that is not a letter or a number, treating them as if they do not exist in the string.

// Example 1:
// Input:

// "A man, a plan, a canal: Panama"