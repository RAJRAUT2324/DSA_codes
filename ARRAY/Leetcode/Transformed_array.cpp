class Solution {
public:
int rightr(int k,int index,vector<int>nums)
{
    int ans=0;
    int count=0;
    while(count<k)
    {
        if(index==nums.size()-1)
        {
            index=0;
        } 
        else
        {
            index++;
        }
      count++;
    }
    return index;
}
int leftr(int k,int index,vector<int>nums)
{
    int ans=0;
    int count=0;
    while(count<k)
    {
        if(index==0)
        {
            index=nums.size()-1;
        } 
        else
        {
            index--;
        }
      count++;
    }
    return index;
}
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
              ans.push_back(nums[rightr(nums[i],i,nums)]);
            }
            else if(nums[i]<0)
            {
                ans.push_back(nums[leftr(abs(nums[i]),i,nums)]);
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};Transformed Array