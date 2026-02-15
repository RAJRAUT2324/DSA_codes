class Solution {
public:
//this function alway returns the minimum element in the array
int peakElement(vector<int>& nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int mid = (s + e) / 2;

        if (nums[mid] > nums[e])
            s = mid + 1;
        else
            e = mid;
    }

    return s;  
}

    int search(vector<int>& nums, int target) {
        int peak=peakElement(nums);
        int s=0;
        int ans=-1;
        int e=nums.size()-1;
           if(peak+1<=e  && (target>=nums[peak+1] && target<=nums[nums.size()-1]))
        {
            s=peak+1;
            e=nums.size()-1;
        }
        else if( peak-1>=0 && (target>=nums[0] && target<=nums[peak-1]))
        {
            s=0;
            e=peak-1;
        }
        else if(nums[peak]==target)
        {
            return peak;
        }
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                break;
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
};