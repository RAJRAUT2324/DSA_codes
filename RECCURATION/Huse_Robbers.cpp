#include<algorithm>
#include<limits>
class Solution {
public:
int solve(int index,vector<int>nums)
{
    if(index>=nums.size())
    {
        return 0;
    }
   //first ghar me robbary
   int include=nums[index]+solve(index+2,nums);
   int exclude=0+solve(index+1,nums);
   int ans=max(include,exclude);
   return ans;
}
    int rob(vector<int>& nums) {
        int index=0;
        int ans=solve(index,nums);
        return ans;
    }
};

// 246. House Robber




// Medium
// 0
// In this problem, you are tasked with determining how much money you can rob from a line of houses without tripping the security systems. Each house has a certain amount of money, represented as a non-negative integer in an array nums. The catch is that robbing two directly adjacent houses will trigger the alarm, so you need to strategically choose which houses to rob to maximize your total haul for the night.

// Example:
// Example 1:

// Input: nums = [1, 2, 3, 1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount = 1 + 3 = 4.