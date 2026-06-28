class Solution {
  public:
    bool isPossible(vector<int>&arr,int n,int m,int mid)
  {
    int pagesum=0;
    int c=1;
    for(int i=0;i<arr.size();i++)
    {
      if(arr[i]>mid) return false;
      if(pagesum+arr[i]>mid)
      {
        c++;
        pagesum=arr[i];
        if(c>m) return false;
      }
      else
      {
       pagesum+=arr[i];
      }
 
    }
    return true;
  }
   int findPages(vector<int> &arr, int m){
       int n=arr.size();
      if(m>n) return -1;
       int s=0;
       int total=0;
       int ans=-1;
       for(auto x : arr)
       {
        total+=x;
       }
       int end=total;
       while(s<=end)
       {
        int mid=(s+end)/2;
        if(isPossible(arr,n,m,mid))
        {
         ans=mid;
         end=mid-1;
        }
        else
        {
          s=mid+1;
        }
       }
       return ans;
    }
  
};
Allocate Minimum Pages
// this is v v v imp