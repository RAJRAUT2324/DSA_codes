#include <algorithm>
class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        // Implement logic to reverse the array
        vector<int>num=arr;
        int size=num.size();
        int i=0;
        int j=size-1;
        while(i<=j)
        {
          int ans=swap(num[i],num[j]);
          i++;
          j--;
        }
        return ans;
    }
};