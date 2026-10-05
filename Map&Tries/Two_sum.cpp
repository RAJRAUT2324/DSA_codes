
using hashmap (hashmap+complementry loop); ***S


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int required=target-nums[i];
            if(mp.count(required)>0)
            {
                return {i,mp[required]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};