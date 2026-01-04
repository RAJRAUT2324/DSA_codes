class Solution {
public:
bool solve(vector<int>& nums,int target,int i)
{
    if(target<0 || i==nums.size()) return false;
    if(target==0) return true;
    int inc=solve(nums,target-nums[i],i+1);
    int exc=solve(nums,target,i+1);
    return inc||exc;
}
//by include and exclude method//
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int target=sum/2;
        if(sum%2!=0) return false;
        bool ans=solve(nums,target,0);
        return ans;
    }
};
// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].