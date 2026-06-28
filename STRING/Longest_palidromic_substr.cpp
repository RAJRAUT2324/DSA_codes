class Solution {
public:
bool find(int i,int j,string& s)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;

    }
    
    return true;
}
    string longestPalindrome(string s) {
        int maxu=0;
        int fs=-1;
        int es=-1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(find(i,j,s))
                {
                    if(maxu<(j-i+1))
                      {
                          maxu=j-i+1;
                          fs=i;
                          es=j;
                      }
                }
            }
        }
        string ans="";
        for(int i=fs;i<=es;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};
5. Longest Palindromic Substring
