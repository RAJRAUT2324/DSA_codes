class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    // Implementation will go here
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if(i>0 && nums[i]==nums[i-1])
      {
        continue;
      }
      for (int j = i+1; j < n; j++) {
         if(j>i+1 && nums[j]==nums[j-1])
      {
        continue;
      }
        for (int k = j+1; k < n; k++) {
           if(k>j+1 && nums[k]==nums[k-1])
      {
        continue;
      }
            int first = nums[i];
            int second = nums[j];
            int third = nums[k];
            sum = first + second + third;
            if (sum == 0) 
            {
             //ans store because of vector
             vector<int>temp;
             temp.push_back(first);
             temp.push_back(second);
             temp.push_back(third);
             ans.push_back(temp);
            }
          }
        
      }
    }
   return ans;
  }
};

