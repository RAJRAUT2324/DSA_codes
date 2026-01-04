int recursiveSum(vector<int>& nums, int index) {
    if(index>=nums.size())
    return 0;
    int sum=0;
    sum=nums[index]+recursiveSum(nums,index+1);
    return sum;
}