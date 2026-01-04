//very important logic of windows 

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
       int i=0; int j=k-1;
       double maxi=0;
       double avg=0;
      double sum=0;
       for(int y=i;y<=j;y++)
       {
        sum=sum+nums[y];
        maxi=sum;
       }
       j++;
       while(j<nums.size())
       {
        sum=sum-nums[i++];
        sum=sum+nums[j++];
        maxi=max(sum,maxi);
       }
       avg=maxi/k;
       return avg;
    }
};
// Medium
// 0
// You are given an integer array nums and an integer k. You need to find the contiguous subarray of length k that has the maximum average and return its average value.

// Note
// The length of nums will be greater than or equal to k.
// The function should return the result as a floating-point number.
// Maintain precision within 10^-5 of the actual answer.
// Example 1:

// Input:

// nums=[1,12,-5,-6,50,3] k=4
// Output:

// 12.75
// Explanation:The subarray [12,-5,-6,50] has the maximum average 12.75.