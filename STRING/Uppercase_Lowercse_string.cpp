//lower to upper case
class Solution {
public:
    string toUpperCase(string s) {
        for(int i=0;i<s.length();i++)
        {
           if(s[i]>='a' && s[i]<='z')
           {
            s[i]=s[i]-'a'+'A';
           }
        }
        return s;
    }
};
//upper case to lower case
class Solution {
public:
    string toLowerCase(string s) {
       //we can seprate the charaters from thr string
       for(int i=0;i<s.length();i++)
       {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
       }
       return s;
    }
};