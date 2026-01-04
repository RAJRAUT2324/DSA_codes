#include<set>
#include<algorithm>
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            int diff=nums[j]-nums[i];
            if(diff==k)
            {
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff>k)
            {
                i++;
            }
            else
            {
                j++;
            }
            if(i==j)
            {
                j++;
            }
        }
        return ans.size();
    }
};

// . K-diff Pairs in an Array




// Medium
// 0
// Given an array of integers nums and an integer k, your task is to find the number of unique k-diff pairs in the array. A k-diff pair is an integer pair (nums[i], nums[j]) such that:

// 0 <= i, j < nums.length
// i != j
// |nums[i] - nums[j]| == k
// Here, |val| denotes the absolute value of val.

// A pair is considered unique if it appears only once, even if there are multiple instances of the corresponding numbers in the array.

// Example
// Input: nums = [3, 1, 4, 1, 5], k = 2

// Output: 2

// Explanation: The unique k-diff pairs are (1, 3) and (3, 5).

// Remember:

// If k = 0, the task reduces to finding the number of numbers that appear more than once in the array.
// You can assume that 1 <= nums.length <= 10,000 and -10^7 <= nums[i] <= 10^7. Also, 0 <= k <= 10^7.
// Example 1:

// Input:

// nums = [3, 1, 4, 1, 5], k = 2
// Output:

// 2
// Explanation:The 2-diff pairs are (1, 3) and (3, 5).
   