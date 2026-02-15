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
    int countFreq(vector<int>& arr, int target) {
       int f=firstOccurance(arr,target);
       int l=lastOccurance(arr,target);
       
       return (f!=-1 && l!=-1) ? (l-f)+1 : 0;
    }
};
// Number of occurrence Greeks of Greek