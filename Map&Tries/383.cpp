class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;
         unordered_map<char,int>mp2;
         for(auto x: ransomNote)
         {
            mp1[x]++;;
         }
         for(auto x: magazine)
         {
            mp2[x]++;;
         }
         bool ans=true;
         for(auto x : ransomNote)
         {
            if(mp1[x]<=mp2[x])
            {
                ans=ans & true;
            }
            else
            {
                ans=ans & false;
            }
         }
         return ans;
    }
};