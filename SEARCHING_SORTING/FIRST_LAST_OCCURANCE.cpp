class Solution {
public:
int firstOccurance(vector<int>& nums, int target)
{
int n=nums.size();
int start=0;
int end=n-1;
int ans=-1;
while(start<=end)
{   int mid=(start+end)/2;
    if(target==nums[mid])
    {
        ans=mid;
        end=mid-1;
    }
    else if(target<nums[mid])
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
}
return ans;
}
int lastOccurance(vector<int>& nums, int target)
{
int n=nums.size();
int start=0;
int end=n-1;
int ans=-1;
while(start<=end)
{   int mid=(start+end)/2;
    if(target==nums[mid])
    {
        ans=mid;
        start=mid+1;
    }
    else if(target<nums[mid])
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
}
return ans;
}
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int start=firstOccurance( nums,target);
        int end=lastOccurance(nums,target);
        vector<int>temp;
        temp.push_back(start);
        temp.push_back(end);
        return temp;
    }
};