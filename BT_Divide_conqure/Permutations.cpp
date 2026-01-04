class Solution {
public:
vector<vector<int>> solve(vector<int>& nums,int i)
{
vector<vector<int>> arr;
//base condition
if(i>=nums.size()) 
{
    arr.push_back(nums);
}
for(int j=i;j<nums.size();j++)
{
    swap(nums[i],nums[j]);
      vector<vector<int>> temp = solve(nums, i + 1);
      for (auto &t : temp)
      arr.push_back(t);
    //bactracking step
    swap(nums[i],nums[j]);
}
return arr;
}
    vector<vector<int>> permute(vector<int>& nums) {
        int i=0;
        vector<vector<int>> arr =solve(nums,i);
        return arr;
    }
};

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]