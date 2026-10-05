class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(auto x :nums1)
        {
            mp1[x]++;
        }
        for(auto x :nums2)
        {
            mp2[x]++;
        }
    vector<int>ans;

        for(auto x : mp1)
        {
            if(x.second>0 && mp2[x.first]>0)
            {
                if(x.second>mp2[x.first])
                {
                    for(int i=0;i<mp2[x.first];i++)
                    {
                        ans.push_back(x.first);
                    }
                }
                else
                {
                    for(int i=0;i<x.second;i++)
                    {
                        ans.push_back(x.first);
                    }
                }
            }
        }
        return ans;

    }
};