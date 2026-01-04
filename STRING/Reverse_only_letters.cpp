
class Solution {
public:
    string reverseOnlyLetters(const string& p) {
     string s=p;
     int n= s.length();
     int i=0;
     int j=n-1;
     while(i<=j)
     {
        if(!isalpha(s[i]))
        {
            
            i++;
            
        }
        else if(!isalpha(s[j]))
        {
            j--;
        }
        else{
            swap(s[i],s[j]);
            i++;
            j--;
        }
     }
     return s;
    }
};

// Input:
// s = "a-bC-dEf-ghIj"

// Output:
// "j-Ih-gfE-dCba"