class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2)
        {
             int ans=INT_MAX;
             ans=min(nums[i],nums[i+1]);
             arr.push_back(ans);
        }
        int sum=0;
        for(auto x:arr)
        {
            sum=sum+x;
        }
        return sum;
    }
};
Code


Testcase
Testcase
Test Result
561. Array Partition