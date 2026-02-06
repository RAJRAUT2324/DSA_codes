#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans = INT_MIN;

        for(int step = 0; step < k; step++) {
            int index = -1;
            ans = INT_MIN;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > ans) {
                    ans = nums[i];
                    index = i;
                }
            }
            nums[index] = INT_MIN;  // safer than -1
        }
        return ans;
    }
};

Code
Testcase
Testcase
Test Result
215. Kth Largest Element in an Array