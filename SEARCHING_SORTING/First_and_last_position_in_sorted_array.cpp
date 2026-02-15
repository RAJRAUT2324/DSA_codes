class Solution {
public:
int firstOccurance(vector<int>& nums, int target)
{
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurance(vector<int>& nums, int target)
{
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int i_1=firstOccurance(nums,target);
        int i_2=lastOccurance(nums,target);
        return {i_1,i_2};
    }
};

//34. Find First and Last Position of Element in Sorted Array