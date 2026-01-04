#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=n;
        while(start<=end)
        {   int mid=(start+end)/2;
            if(nums[mid]==mid)
            {
                start=mid+1;
            }
            if(nums[mid]==mid+1)
            {
                ans=mid;
                end=mid-1;
            }
           
        }
        return ans;
    }
};
//logic that if number starts from 0 then number and there indexes are same //