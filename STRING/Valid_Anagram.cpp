#include <algorithm> // Required for std::sort

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
      int arr[1000]={0};
      bool ans=true;
      for(int i=0;i<s.length();i++)
      {
        char ch=s[i];
        arr[ch]++;
      }
      for(int i=0;i<t.length();i++)
      {
        char ch=t[i];
        arr[ch]--;
      }
     for(int i=0;i<1000;i++)
     {
        if(arr[i]!=0)
        {
            ans=false;
        }
       
     }
     return ans;
    }    
};
// s = "anagram"

// t = "nagaram"