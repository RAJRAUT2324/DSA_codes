#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int num=121;
        int smallest=INT_MAX;
        int digit=0;
        while(num!=0)
        {
            digit=num%10;
            smallest=min(smallest,digit);
            num=num/10;
        }
       cout<<smallest;
    
}