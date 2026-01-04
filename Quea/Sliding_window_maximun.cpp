class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
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
            dq.push_back(i);
        }
        //ans finding
        int element=nums[dq.front()];
        ans.push_back(element);
      // adding new elemt and removing old element
      for(int j=k;j<nums.size();j++)
      {
        //removal
        if(!dq.empty() && dq.front()<=j-k)
        {
            dq.pop_front();
        }
        //adition
        while(!dq.empty() && nums[dq.back()]<nums[j])
            {
                dq.pop_back();
            }
            dq.push_back(j);
        //ans
            int element=nums[dq.front()];
        ans.push_back(element);
      }
  return ans;
    }
};

239. Sliding Window Maximum
Solved
Hard
Topics
premium lock icon
Companies
Hint
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

 

Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6