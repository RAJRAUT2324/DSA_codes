#include<algorithm>
class Solution {
public:
int solve(int amount,vector<int>&coins,int index)
{
    if(amount==0)
    {
        return 1;
    }
    if(index>=coins.size())
    {
        return 0;
    }

    //include condition
    int include=0;
    if(coins[index]<=amount)
    {
        include=solve(amount-coins[index],coins,index);
    }
    //exclude condition
    int exclude=0;
    exclude=solve(amount,coins,index+1);
    int total=include+exclude;
    return total;
}
    int change(int amount, vector<int>& coins)
    {
        int index=0;
        int ans=solve(amount,coins,index);
        return ans;
    }
};

// Example 1:

// Input:

// Input: amount = 5, coins = [1, 2, 5]

// Output:

// 4
// Explanation:Ways to make 5: (5), (2+2+1), (2+1+1+1), (1+1+1+1+1)