class Solution {
public:
bool vovel(char ch)
{
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(vovel(s[i]) && vovel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(vovel(s[i])==false)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return s;
    }
};

// Input

// s = "hello"
// Output

// "holle"