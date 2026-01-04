#include <algorithm>
class Solution {
public:
    int findFirstUnsortedIndex (const vector<int>& v) {
        vector<int>arr=v;
        int size=arr.size();
        for(int i=0;i<size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                return i;
            }
        }
        return -1;
    }
};
//Input: [1, 2, 3, 4, 6, 5, 7, 8]
//Output: 4