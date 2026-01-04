class Solution {
public:
    int strStr(const string& haystack, const string& needle) {
        int m=haystack.length();
        int n=needle.length();
        for(int i=0;i<=m-n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(haystack[j+i]!=needle[j])
                {
                    break;
                }
                if(j==n-1)
                {
                    return i;
                }
            }
        }
        return-1;
    }
};

// Example 1:
// Input:
// haystack = "hello"
// needle = "ll"
// Output: 2