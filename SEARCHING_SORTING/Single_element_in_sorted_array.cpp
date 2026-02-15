class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
                if(mid-1>=s && nums[mid]==nums[mid-1])
                {
                    if(((mid-1) & 1) == 0) 
                    {
                        s=mid+1;
                    }
                    else
                    {
                        e=mid-2;
                    }
                }
                else if(mid+1<=e && nums[mid]==nums[mid+1])
               {
                    if(((mid) & 1) == 0) 
                    {
                        s=mid+2;
                    }
                    else
                    {
                        e=mid-1;
                    }
                }
                else
                {
                    ans=nums[mid];
                    break;
                }
        }
        return ans;
    }
};

// 540. Single Element in a Sorted Array