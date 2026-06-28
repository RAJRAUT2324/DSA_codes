class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size()>=0 && arr[0]!=1)
        {
            arr[0]=1;
        }
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1])<=1)
            {
               continue;
            }
            else
        {
            arr[i]=arr[i-1]+1;
        }
        }
        int ans=0;
        for(auto x : arr)
        {
            ans=max(ans,x);
        }

        return ans;
    }
};