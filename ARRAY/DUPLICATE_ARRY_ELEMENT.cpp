class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<=size;i++)
        {
            for(int j=i+1;j<=size;j++)
            {
                if(nums[i]==nums[j])
                {
                  int ans=nums[i];
                    return ans;
                }
            }
        }
      
      return { };
    }
};


// i solve t in the 0{n} solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                arr.push_back(nums[i]);
            }
            else
            {
                continue;
            }
        }
        int ans=arr.size()+1;
        return ans;
    }
};