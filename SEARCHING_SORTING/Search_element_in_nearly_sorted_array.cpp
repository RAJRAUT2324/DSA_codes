int findElementInNearlySortedArray(const vector<int>& arr, int target) {
  int n=arr.size();
  int s=0;
  int e=n-1;
  while(s<=e)
  {
    int mid=(s+e)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    if(( arr[mid+1]==target))
    {
        return mid+1;
    }
    if((arr[mid-1]==target))
    {
        return mid-1;
    }
   if(target>arr[mid])
   {
    s=mid+1;
   }
   else
   {
    e=mid-1;
   }
   
  }
  // is line tak pahucha yani vo return nahi huaa yani vo -1 return karega babalu shreyas
  return -1; 
}
// Input:

// Input: n = 6, arr = [10, 20, 30, 40, 50, 60], K = 30
// Output:

// 2
// Explanation:30 is found at index 2.