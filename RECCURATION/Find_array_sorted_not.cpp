class Solution {
  public:
  bool solve(vector<int>& arr,int index)
  {
      if(index==0)
      {
          return true;
      }
      if(arr[index]<arr[index-1])
      {
          return false;
      }
      bool ans;
      if(arr[index]>=arr[index-1])
      {  //ek case hum dekhenge aur ek case hamara reccursion dekhega
          ans=true;
          ans=solve(arr,index-1);
      }
      return ans;
  }
    bool isSorted(vector<int>& arr) {
    int index=arr.size()-1;
    bool ans=solve(arr,index);
    return ans;
    }
};

// Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

// Examples:

// Input: arr[] = [10, 20, 30, 40, 50]
// Output: true
// Explanation: The given array is sorted.