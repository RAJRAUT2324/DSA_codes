class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int magority=nums.size()/2;
        for(int i=0;i<nums.size()-1;i++)
        {
         if(nums[i]==nums[i+1])
         {
            count++;
         }
         else
         {
           if(count>magority)
           {
            return nums[i];
           }
           count=1;
         }
        }
          return (count>magority) ? nums[nums.size()-1] : 0;
    }
};
169. Majority Element