class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int pivot=-1;
        int rs=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                pivot=i;
                break;
            }
        }
        if(pivot==-1)
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>arr[pivot])
            {
                rs=i;
                break;
            }
        }
        swap(arr[pivot],arr[rs]);
        reverse(arr.begin()+(pivot+1),arr.end());
    }
};