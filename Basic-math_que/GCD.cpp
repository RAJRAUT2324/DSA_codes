//  gretest common divisor == h c f
class Solution {
public:
    int findGCD(int a, int b) {
       while(a!=b)
       {
        if(a>b)
        {
            a=a-b;
        }
        else
        b=b-a;
       }
       return a;
    }
};