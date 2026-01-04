class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int n=arr.size();
       int s=0;
       int e=n-1;
       int result=-1;
       while(s<=e)
       {
           int mid=(s+e)/2;
           if(arr[mid]<arr[mid+1])
           {
               s=mid+1;
           }
           else 
           {
               result=mid;
               e=mid-1;
           }
          
       }
        return result;
    }
};
// Input: arr = [0, 2, 5, 3, 1]
// Output: 2