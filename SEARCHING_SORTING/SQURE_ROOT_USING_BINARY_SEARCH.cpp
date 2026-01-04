class Solution {
public:
    int mySqrt(int x) {
        long long int s=0;
       long long int e=x;
        long long int ans=-1;
       while(s<=e)
        {
           long long int mid=(s+e)/2;
            if(mid*mid==x)
            {
               return mid;
            }
            if(mid*mid>x)
            {
                e=mid-1;
            }
            else
            {
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};
// Example:
// Example 1:
// Input: x = 16

// Output: 4

// Explanation: The integer part of the square root of 16 is 4 since 4 * 4 = 16.

// Example 2:
// Input: x = 8

// Output: 2

// Explanation: The integer part of the square root of 8 is 2 since 3 * 3 = 9 (which is greater than 8), and 2 * 2 = 4, which is less than 8.