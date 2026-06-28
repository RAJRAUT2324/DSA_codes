//Brute force method
class Solution {
public:
    int myAtoi(string s) {
     string with_zero="";
     bool n=false;
     bool p=false;
     for(int i=0;i<s.length();i++)
     {
        if(with_zero.empty()&& !p && !n && s[i]=='-') 
        {
            n=true;
        }
        else if(with_zero.empty() && !n && !p && s[i]=='+') 
        {
            p=true;
            continue;
        }
        else if(with_zero.empty()&& s[i]==' ')
        {
            if(n) return 0;
            if(p) return 0;
            continue;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            with_zero.push_back(s[i]);
        }
        else
        {
            break;
        }
     }
     string as="";
     for(int i=0;i<with_zero.length();i++)
     {
        if(with_zero[i]=='0')
        {
            with_zero[i]='+';
        }
        else
        {
            break;
        }
     }
     for(auto x : with_zero)
     {
        if(x!='+')
        {
            as.push_back(x);
        }
     }
    int f=0;
    for(int i=0;i<as.length();i++)
{
    int digit = as[i]-'0';

    if(f > (INT_MAX - digit) / 10)
        return n ? INT_MIN : INT_MAX;

    f = f*10 + digit;
}
     return n ? 0-f : f;
    }
};
8. String to Integer (atoi)

//
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