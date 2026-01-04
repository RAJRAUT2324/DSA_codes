class Solution {
public:
    int findUniqueElement(vector<int>& nums)
    {
    int size=nums.size();
    int ans=0;
    for(int i=0;i<=size;i++)
    {
        ans=ans^nums[i];
    }
    return ans;
    }
};
//Input:

//Input: nums = [2, 3, 5, 3, 2]
//Output:

//5