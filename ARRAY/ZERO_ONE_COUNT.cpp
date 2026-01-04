class Solution {
public:
    std::pair<int, int> countZerosAndOnes(const std::vector<int>& nums) {
       int totalZero=0;
       int totalOne=0;
       int size=nums.size();
       for(int i=0;i<size;i++)
       {
        if(nums[i]==0)
        {
            totalZero++;
        }
        if(nums[i]==1)
        {
            totalOne++;
        }
        }
        return {totalZero,totalOne};
   }
     
};