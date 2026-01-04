class Solution {
public:
    int findPivotIndex(vector<int>& nums){
int n=nums.size();
int s=0;
int e=n-1;
int ans=-1;
while(s<=e)
{
    int mid=(s+e)/2;
    if(nums[mid]>nums[mid+1] && ((mid+1)<n))
    {
     ans=mid;
     return mid;
    }
    if(nums[mid]<nums[0])
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return ans;
}
};
// 449. Find the Pivot Index of a Rotated Array




// Medium
// 0
// You are given an array that has been rotated at some pivot unknown to you beforehand. The array was initially sorted in increasing order, and then rotated at the pivot. Your task is to find the pivot index, which is the index of the highest element in the array (i.e., the last element of the unrotated sorted array).

// A rotated sorted array means that you take a portion of a sorted array from some index k to the end, and move it to the front. For example, the sorted array [0, 1, 2, 4, 5, 6, 7] after being rotated at pivot index 3, becomes [4, 5, 6, 7, 0, 1, 2].

// Your Task:
// Write a function to return the index of the pivot.

// Example:
// Input: nums = [4, 5, 6, 7, 0, 1, 2]

// Output: 3