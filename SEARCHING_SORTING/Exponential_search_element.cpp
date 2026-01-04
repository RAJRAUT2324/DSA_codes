#include<algorithm>
class Solution {
public:
int bs(int start,int end,vector<int>arr,int target)
{
    int s=start;
    int e=end;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
    int exponentialSearch(vector<int>& nums, int target) {
      int n=nums.size();
      if(nums[0]==target)
      {
        return 0;
      }
      int i=1;
      while(i<n && nums[i]<=target)
      {
        i=i*2;
      }
      return bs(i,min(i/2,n-1),nums,target);
    }
};

// Input: nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 5
// Output: 4
// Explanation: The target 5 is found at index 4 in the array.