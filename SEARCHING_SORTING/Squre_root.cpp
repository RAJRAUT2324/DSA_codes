class Solution {
  public:
    int floorSqrt(int n) {
       int s=0;
       int ans=-1;
       int e=n;
       while(s<=e)
       {
           int mid=s+(e-s)/2;
           if(mid*mid<=n)
           {
               ans=mid;
               s=mid+1;
           }
           else
           {
               e=mid-1;
           }
       }
       return ans;
    }
};
Square Root


class Solution {
  public:
    int nthRoot(int n, int m) {
        if(m==0) return 0;
      int s=1;
      int e=m;
      int ans=-1;
      while(s<=e)
      {
          int p=1;
          int mid=s+(e-s)/2;
          for(int i=0;i<n;i++)
          {
              p=mid*p;
          }
          if(p==m)
          {
              ans=mid;
              break;
          }
          else if(p<m)
          {
              s=mid+1;
          }
          else
          {
              e=mid-1;
          }
      }
      return ans;
    }
};

Find nth root of m