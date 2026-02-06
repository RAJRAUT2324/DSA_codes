
// Better solution

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
      unordered_map<int,int>mp;
      for(int i=0;i<arr.size();i++)
      {
          int need=target-arr[i];
          if(mp.find(need)!=mp.end())
          {
              return true;
          }
          mp[arr[i]]=i;
      }
      return false;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        int sum=0;
     for(int i=0;i<size;i++)
     {  
        for(int j=i+1;j<size;j++)
        {
            int first=nums[i];
            int second=nums[j];
            sum=first+second;
           if(sum==target)
           {
            return {i,j};
           }
         }
     }
     return {};
    }
};
//Input:

 //nums=[2,7,11,15] target=9
 //Output:

 //0, 1
 //Explanation:2 + 7 = 9, and their indices are 0 and 1