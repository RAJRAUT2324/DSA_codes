#include <algorithm>
int peakIndexInMountainArray(vector<int>& arr) {
  int n=arr.size();
  int start=0;
  int end=n-1;
  int ans=-1;
  while(start<=end)
  {  
    int mid=(start+end)/2;
    if(arr[mid]<arr[mid+1])
    {
        start=mid+1;
    }
    else
    {
        ans=mid;
        end=mid-1;
    }
   
  }
  return ans;
//   int ans=0;
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]>arr[i+1])
//     {
//      ans=i;
//      break;
//     }
//   }
//   return ans;
// Input: arr = [0, 2, 5, 3, 1]
// Output: 2 this is index returns
  }