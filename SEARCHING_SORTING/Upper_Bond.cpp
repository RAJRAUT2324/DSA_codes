class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int s=0;
        int ans=arr.size();
        int e=arr.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]>target)
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

// Greeks of Greek upper bond