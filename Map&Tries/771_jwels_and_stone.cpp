class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp2;
        unordered_map<char,int>mp1;
        for(auto x : stones)
        {
            mp2[x]++;
        }
        for(auto x : jewels)
        {
            mp1[x]++;
        }
        int count=0;
        for(auto x : mp2)
        {
            if(mp1.find(x.first)!=mp1.end())
            {
                count+=x.second;
            }
        }
        return count;
    }
};