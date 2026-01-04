#include <iostream>
#include<limits.h>
using namespace std;
int main()
{  int x=-152;
    long long  int digit=0;
         long long int ans=0;
        while(x!=0)
        {                   //it returns the integer value with the sigh he as in original value
                            //and reverse the number
            digit=x%10;
            ans=(ans*10)+digit;
            x=x/10;
            
        }
        bool fall=0;
        if(ans>0)        {
            fall=1;
        }
        else
        {
            fall=0;
        }
       long long int num=abs(ans);

        if(fall==0)
        {
            num=0-num;
    }
        if(num<INT_MIN||num>INT_MAX)
        {
            return 0;
        }
       cout<< ans; //-251
}
