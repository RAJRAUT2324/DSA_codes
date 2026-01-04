#include<limits>
int answer(int dividend, int divisor) {
    int s=0;
    int e=dividend;
    int ans=-1;
    while(s<=e)
    {  int mid=(s+e)/2;
        if((divisor*mid)<=dividend)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        
    }
    return ans;
    
}
long long int findQuotient(int dividend, int divisor) {
    int ans=answer(abs(dividend),abs(divisor));
    if (divisor==0)
    {
        return INT_MAX;
    }
     else if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
    {
        return ans;
    }
    else
    {
      ans=0-ans;
    }
    return ans;
}
// You have been given two integers, dividend and divisor, and your task is to compute the quotient resulting from dividing dividend by divisor without using the built-in division (/) or modulus (%) operators. The result should be the quotient of the division truncated towards zero, which means the fractional part of the result should be discarded.

// While implementing the function, handle the case of division by zero by returning the maximum positive integer value (INT_MAX).

// Examples:
// Example 1:
// Input:
// dividend = 10
// divisor = 3