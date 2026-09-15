class Solution {
public:
//using reccurtion
// int solve(vector<int>arr,int curr, int prev)
// {
//     if(curr>=arr.size())
//     {
//         return 0;
//     }
//     int i=0;
//     if(prev==-1 ||arr[curr]>arr[prev])
//     {
//         i=1+solve(arr,curr+1,curr);
//     }
//     int e=0+solve(arr,curr+1,prev);
//     int ans=max(i,e);
//     return ans;
// }

//Top down
int solve(vector<int>&arr,int curr, int prev,vector<vector<int>>&dp)
{
    if(curr>=arr.size())
    {
        return 0;
    }
    if(dp[curr][prev+1]!=-1)
    {
        return dp[curr][prev+1];
    }
    int i=0;
    if(prev==-1 ||arr[curr]>arr[prev])
    {
        i=1+solve(arr,curr+1,curr,dp);
    }
    int e=0+solve(arr,curr+1,prev,dp);
    int ans=max(i,e);
    dp[curr][prev+1]=ans;
    return ans;
}
    int lengthOfLIS(vector<int>& nums) {
        int curr=0;
        int prev=-1;
        //Two paramter changes hence 2d array
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        int ans=solve(nums,curr,prev,dp);
        return ans;
    }
};