class Solution {
  public:
    int powMod(int x, int n, int M) {
       long long int ans=1;
       while(n>0)
       {
           if(n & 1)
           {
               ans=(ans*x)%M;
           }
           x=(x*x)%M;
           n>>=1;
       }
        return ans;
    }
};
// Given three integers x, n, and M, compute (x^n) % M, i.e., the remainder when x raised to the power n is divided by M.

// Examples:

// Input: x = 3, n = 2, M = 4
// Output: 1
// Explanation: 32 % 4 = 9 % 4 = 1.

//another solution for the gfg
class Solution {
  public:
    int powMod(int x, int n, int M) {
        long res = 1;
        x %= M;
        while (n) {
            if (n & 1) res = res * x % M;
            x = (long)x * x % M;
            n >>= 1;
        }
        return res;
    }
};