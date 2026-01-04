class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);  // this is use here for appling all the 
        //element in array as zero it assigns all index zero

        for(int i=1;i<nums.size();i++)
        {
            lsum[i]=lsum[i-1]+nums[i-1];
        }
        for(int j=nums.size()-2;j>=0;j--)
        {
            rsum[j]=rsum[j+1]+nums[j+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(lsum[i]==rsum[i])
            {
                return i;
            }
        }
        return -1;
    }
};

// Given an integer array nums, find the pivot index of this array.

// The pivot index is defined as the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the right of the index.

// If no such index exists, return -1. If there are multiple pivot indices, you should return the left-most pivot index.

// Notes:
// The array may contain negative numbers and be either large or small.
// Example 1:

// Input:

// n=6 nums=[1,7,3,6,5,6]
// Output:

// 3
// Explanation:Left-sum (1 + 7 + 3) = 11 and right-sum (5 + 6) = 11 at index 3.