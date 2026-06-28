class Solution {
public:
int pre(vector<int>& nums,int i)
{
    set<int>arr;
    for(int j=0;j<=i;j++)
    {
        arr.insert(nums[j]);
    }
  int s=arr.size();
  return s;
}
int suf(vector<int>& nums,int i)
{
    set<int>arr;
    for(int j=i+1;j<nums.size();j++)
    {
        arr.insert(nums[j]);
    }
  int s=arr.size();
  return s;
}
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            int ans=pre(nums,i)-suf(nums,i);
            arr.push_back(ans);
        }
        return arr;
    }
};