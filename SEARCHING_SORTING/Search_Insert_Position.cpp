class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int tans=-1;
        int less=-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target)
            {
                tans=mid;
                break;
            }
            else if(nums[mid]<=target)
            {
                less=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        if(tans!=-1)
        {
            return tans;
        }
        return less+1;
    }
};
//Search Insert Position