class Solution {
public:
int x(vector<int> nums,int i,int a)
{
    if(i==nums.size()) return a;
    int a1=x(nums,i+1,a^nums[i]);
    int a2=x(nums,i+1,a);   ///beacuse we passing result with the acuumulator
    return a1+a2;
}
    int subsetXORSum(vector<int>& nums) {
        return x(nums,0,0);
    }
};