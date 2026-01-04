     #include <iostream>
using namespace std;
int main()
{  int num=3;
    if(num==1)
       {
       cout<< "No";
       }
         if(num==2||num==3)
       {
        cout<< "Yes";
       }
     
       int start=2;
       int end=num-1;
       for(int i=start;i<=end;i++)
       {
        if(num % i == 0)
        {
            cout<< "No";
        }
       
     
      
       }
        cout<< "Yes";
    }