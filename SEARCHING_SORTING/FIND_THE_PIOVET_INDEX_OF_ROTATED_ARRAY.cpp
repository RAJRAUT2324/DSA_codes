class Solution {
public:
   int findPivotIndex(vector<int>& nums){
   int n=nums.size();
   int s=0;
   int e=n-1; 
   while(s<=e)
   {
    int mid=(s+e)/2;

    if(nums[mid]>nums[mid+1] && (mid+1)<n)
    {
       return mid;
    }
    if(nums[mid]<nums[s])
    {
         e=mid-1; 
       
    }
    else
    {
       s=mid+1;
    }
   }
   return -1;
}
};
// Your Task:
// Write a function to return the index of the pivot.

// Example:
// Input: nums = [4, 5, 6, 7, 0, 1, 2]

// Output: 3

// Explanation: In this array, the pivot point is the index 3 because the array [4, 5, 6, 7], when combined with [0, 1, 2], forms the original sorted array [0, 1, 2, 4, 5, 6, 7].

