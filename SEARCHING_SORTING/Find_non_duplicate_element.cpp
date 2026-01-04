class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e)
        {
          int mid=(s+e)/2;
          if(s==e)
          {
            return nums[s];
          }
          int leftvalue=0;
          if(mid-1>=0)
          {
            leftvalue=nums[mid-1];
          }
          int rightvalue=0;
          if(mid+1<n)
          {
            rightvalue=nums[mid+1];
          }
          if((nums[mid]!=leftvalue ) && (nums[mid]!=rightvalue))
          {
            return nums[mid];
          }
           else if(nums[mid]==leftvalue)
          {
            if((mid-1 & 1)==0)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
          }
          else{
             if((mid+1 & 1)==0)
            {
                 e=mid-1;
            }
            else
            {
               s=mid+1;
            }
          }
        }
        return -1;
    }
};
// 454. Find Single Non-Duplicate Element using Binary Search




// Medium
// 0
// You are given a sorted array consisting of n integers where every element appears exactly twice, except for one element which appears exactly once. Your task is to find this single non-duplicate element in the array. The array is structured in such a way that it guarantees that exactly one element appears once, while every other element appears twice.

// To solve this problem efficiently, you should implement an algorithm with O(log n) runtime complexity.

// Example:
// Input: nums = [1, 1, 2, 3, 3, 4, 4, 8, 8]

// Output: 2

// Explanation: Here, each element appears twice except for 2, which appears only once. Therefore, 2 is the single non-duplicate element in the array.

// Example 1:

// Input:

// Input: [1,1,2,3,3,4,4,8,8]
// Output:

// 2
// Explanation:The unique element in the array is 2.