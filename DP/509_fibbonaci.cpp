class Solution {
public:
//simple reccurtion function
int solverec(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans=solverec(n-1)+solverec(n-2);
    return ans;
}

//Recurtion + Memorization (top down aproach)

int solvedp(int n,vector<int>&dp)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    //step 3 :Always starts after the base cases
    if(dp[n]!=-1)
    {
        return dp[n];
    } 
    int ans=solvedp(n-1,dp)+solvedp(n-2,dp);
    //step 2: store ans in dp
    dp[n]=ans;
    return ans;
}

//step 3 : by the bottom up aproach
int b(int n)
{
    //step 1: add base cases in the array but here we are using
    //the variables to reduce space complexity
    int p1=0;
    int p2=1;
    //step 2: bottom up hence loop1 5-4-3--2-1
    for(int i=2;i<=n;i++)
    {
        int curr=p1+p2;
        p1=p2;
        p2=curr;
        
    }
    return p2;
}
    int fib(int n) {
        if(n==0) return 0;
        //step 1 : declare 1d dp and initialize it
        vector<int>dp(n+1,-1);
        int ans=b(n);
        return ans;
    }
};