class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        if(s.size()>=3)
        {
            int count=0;
            int value=s.size()-3;
            for(auto x : s)
            {
                if(count<=value)
                {
                    ans=x;
                    count++;
                }
                
            }
        }
        else
        {
            for(auto x: s)
            {
                ans=x;
            }
        }
        return ans;
    }
};
Third Maximum Number