class Solution {
public:
    int sumOfMinAndMax(vector<int>& nums, int k) {
        deque<int>dq,dq2;
        int ans=0;
        //accsesing first window
        for(int i=0;i<k;i++)
        {
            //hame sare index store karane hai dq mai
            //but before ibserting agara dq me koi 
            //chota element left me hoga to hame vo pop karana hai
            while(!dq.empty() && nums[dq.back()]<nums[i])
            {
                dq.pop_back();
            }
             while(!dq2.empty() && nums[dq2.back()]>nums[i])
            {
                dq2.pop_back();
            }
            dq.push_back(i);
            dq2.push_back(i);
        }
        //ans finding
        ans += nums[dq.front()] + nums[dq2.front()];

      // adding new elemt and removing old element
      for(int j=k;j<nums.size();j++)
      {
        //removal
        if(!dq.empty() && dq.front()<=j-k)
        {
            dq.pop_front();
        }
         if(!dq2.empty() && dq2.front()<=j-k)
        {
            dq2.pop_front();
        }
        //adition
        while(!dq.empty() && nums[dq.back()]<nums[j])
            {
                dq.pop_back();
            }
            dq.push_back(j);
            while(!dq2.empty() && nums[dq2.back()]>nums[j])
            {
                dq2.pop_back();
            }
            dq2.push_back(j);
        //ans finding
        ans += nums[dq.front()] + nums[dq2.front()];

      }
  return ans;
    }
    
};
282. Sum of Min and Max Elements of All Subarrays of Size k




Medium
0
Sum of Min and Max Elements of All Subarrays of Size k
Given an array of integers arr, and an integer k, the task is to compute the sum of the minimum and maximum elements for every contiguous subarray of size k in the array. Your final goal is to return the total sum of these values.

Problem Description
For a given arr and integer k, find all contiguous subarrays of size k, determine the minimum and maximum values for each subarray, add these values together, and accumulate the results.

Example
Input:


arr = [2, 1, 3]
k = 2