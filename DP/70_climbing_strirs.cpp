class Solution {
public:

int solve(int n,vector<int>&arr)
{
    if(n==1 || n==2)
    {
        return n;
    }
    if(arr[n]!=-1)
    {
      return arr[n];
    }


    int ans=solve(n-1,arr)+solve(n-2,arr);
    arr[n]=ans;
    return ans;

}
    int climbStairs(int n) {
       vector<int>arr(10000,-1);
       int ans= solve(n,arr);
       return ans;
    }
};