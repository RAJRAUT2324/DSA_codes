class Solution {
public:
    int countPrimes(int n) {
        if (n==0)
        {
            return 0;
        }
        vector<bool>arr(n+1,true);
        int count=0;
        arr[0]=false;
        arr[1]=false;
        arr[n]=false;
        for(int i=2;i*i<=n;i++)
        {  if(arr[i])
        {
            int j=i*i;
            while(j<=n)
            {
                arr[j]=false;
                j=j+i;
            }
        }
            
        }
        for(auto i : arr)
        {
            if(i)
            {
                count++;
            }
        }
        return count;
    }
};
// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 