class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int>ans;
        sort(nums.begin(),nums.end());

        int count=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }
            else
            {
            if(count>(nums.size()/3))
            {
                ans.push_back(nums[i]);
            }
            count=1;
            }
           
         
        }
          if(count>(nums.size()/3))
            {
                ans.push_back(nums[nums.size()-1]);
            }
        return ans;
    }
};