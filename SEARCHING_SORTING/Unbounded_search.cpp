/*class InfiniteArray {
private:
    vector<int> arr;
public:
    InfiniteArray(vector<int> nums) : arr(nums) {}

    int get(int index) {
        if (index >= arr.size()) return INT_MAX;
        return arr[index];
    }
};*/

//it is the  infinite array class yto acess elements we need to use nums.get[index of element]
//and also we have to pass it by referace such as className&arr_name

#include<algorithm>
class Solution {
public:
int bs(int start, int end, InfiniteArray& nums, int target)
{
    int s=start;
    int e=end;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(nums.get(mid)==target)
        {
            return mid;
        }
        else if(nums.get(mid)<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
    int unboundedSearch(InfiniteArray& nums, int target) {
      if(nums.get(0)==target)
      {
        return 0;
      }
      int i=1;
      while(nums.get(i)<=target)
      {
        i=i*2;
      }
       return bs(i / 2, i, nums, target);
    }
};

// Example
// Suppose you have an infinite-sized array that starts with:

// [1, 2, 3, 4, 5, 6, ...]

// If you search for the target value 4, your implemented function should return the index 3 since arrays are zero-based indexed.