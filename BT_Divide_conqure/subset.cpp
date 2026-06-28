class Solution {
public:
void solve(vector<vector<int>>& arr,vector<int>& temp,vector<int>& nums,int i)
{
    if(i==nums.size())
    {
        arr.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    //including element
    solve(arr,temp,nums,i+1);

    temp.pop_back(); // this single step is called as the backtracking because when we come from the include method to exclude we need to exclude that element this is called as the backtracking step in the exclude method
    //exclude
    solve(arr,temp,nums,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>arr;
        vector<int>temp;
        solve(arr,temp,nums,0);
        return arr;
    }
};