 #include <iostream>
using namespace std;
int main()
{   int num=1221;
    int original=num;     
        int digit=0;
        int reverse=0;
        while(num!=0)
        {
            digit=num%10;
            reverse=(reverse*10)+digit;
            num=num/10;

        }
      
         if(original==reverse)
         {cout<<  "Yes";   
         }
         else
         {
            cout<< "No";
         }
        }