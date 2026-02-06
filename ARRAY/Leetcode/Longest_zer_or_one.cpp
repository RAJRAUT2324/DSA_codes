class Solution {
  public:
  int maxZero_oneCount(vector<int>arr)
  {
      int curr=1;
      int maxZ_O=INT_MIN;
      for(int i=0;i<arr.size()-1;i++)
      {
          if(arr[i]==arr[i+1])
          {
              curr++;
          }
          else
          {
              maxZ_O=max(curr,maxZ_O);
              curr=1;
          }
      }
      maxZ_O=max(curr,maxZ_O);
      
      return maxZ_O;
  }
    int maxConsecBits(vector<int> &arr) {
       int ans=maxZero_oneCount(arr);
       return ans;
        
    }
};
Max Consecutive Bit