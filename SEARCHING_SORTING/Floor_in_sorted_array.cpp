class Solution {
  public:
    int findFloor(vector<int>& arr, int target) {
         int s=0;
        int ans=-1;
        int e=arr.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]<=target)
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
  // Floor in a Sorted Array
