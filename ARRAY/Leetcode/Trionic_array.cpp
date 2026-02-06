class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        bool pb = false;
        bool qb = false;
        bool rb = false;

        int i = 0;

        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i > 0) pb = true;

        int mid = i;
        while (pb && i < n - 1 && nums[i] > nums[i + 1]) {
            i++;
        }
        if (i > mid) qb = true;
        int start = i;
        while (qb && i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i > start && i == n - 1) rb = true;
        return (pb && qb && rb);
    }
};

Code
Testcase
Testcase
Test Result
3637. Trionic Array I