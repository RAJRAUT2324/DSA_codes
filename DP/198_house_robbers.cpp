class Solution {
public:
int solve(vector<int>& nums,int i,vector<int>&dp)
{
    if(i>=nums.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int inc=nums[i]+solve(nums,i+2,dp);
    int exc=0+solve(nums,i+1,dp);
    int ans=max(inc,exc);
    dp[i]=ans;
    return ans;
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int i=0;
        int ans=solve(nums,i,dp);
        return ans;
    }
};