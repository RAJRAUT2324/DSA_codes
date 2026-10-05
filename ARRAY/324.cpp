class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int mid = (nums.size() + 1) / 2;

        int i = mid - 1;
        int j = nums.size() - 1;

        vector<int> ans;

        sort(nums.begin(), nums.end());

        while(i >= 0)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);

            i--;
            j--;
        }

        if(ans.size() < nums.size())
        {
            ans.push_back(nums[0]);
        }

        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = ans[i];
        }
    }
};