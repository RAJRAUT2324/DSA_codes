class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                arr.push_back(nums[i]);
            }
            else
            {
                count++;
            }

        }
        int j;
        for(j=0;j<arr.size();j++)
        {
            nums[j]=arr[j];
        }
        for(int i=j;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};
283. Move Zeroes