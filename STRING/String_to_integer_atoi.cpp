class Solution {
public:
    int myAtoi(const string& s) {
        int num=0,i=0,sign=1;
        while(s[i]==' ')
        {
            i++;
        }

        if(i<s.length() && ((s[i]=='-') || (s[i]=='+')))
        {
             sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i<s.length() && isdigit(s[i]))
        {
            if(num>INT_MAX/10 || (num==INT_MAX/10 && s[i]>'7') )
            {
               return (sign == 1) ? INT_MAX : INT_MIN;
               
            }
            num=num*10+(s[i]-'0');
            i++;
        }
        return num*sign;
    }
};
// Input: " -42"

// Process:

// Ignore initial whitespace -> "-42"
// Sign is '-' -> "-"
// Read digits "42"
// Result integer is -42
// Output: -42

// Input: "4193 with words"

// Process:

// Ignore initial whitespace
// Sign is positive
// Read digits "4193"
// Ignore non-digit "with words"
// Result integer is 4193
// Output: 4193