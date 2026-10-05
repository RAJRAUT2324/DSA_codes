class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
   int low=0;
   int high=k-1;
   int sum=0;
   for(int i=low;i<=high;i++)
   {
       sum+=arr[i];
   }
   
   int ans=INT_MIN;
   while(high<arr.size())
   {
       ans=max(ans,sum);
       low++;
       high++;
       sum=sum-arr[low-1];
       if(high<arr.size())
       {
           sum+=arr[high];
       }
   }
   return ans;
    }
};