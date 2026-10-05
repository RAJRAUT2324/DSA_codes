class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int res=INT_MAX;
        int low=0;
        int high=0;

        while(high<nums.size())
        {
            sum=sum+nums[high];
            while(sum>=target)
            {
                res=min(high-low+1,res);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
        return res!=INT_MAX ? res : 0;
    }
};