class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int s=0;
        int ans=arr.size();
        int e=arr.size();
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]>=target)
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};
// Greek of Greek