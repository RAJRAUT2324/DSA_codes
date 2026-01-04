#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    int n2=n-1;
    int maxspace=2*n2-3;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        if(row==1)
        {
            cout<<"*";
        }
        else
        {
            cout<<"*";
            for(int col=1;col<=2*row-3;col++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=1;row<=n2;row++)
    {
         for(int col=1;col<=row;col++)
         {
            cout<<" ";
         }
         if(row==n2)
         {
            cout<<"*";
         }
         else
         {  cout<<"*";
            for(int col=1;col<=maxspace;col++)  
            {
                cout<<" ";
            }
            cout<<"*";
            maxspace=maxspace-2;

         }
         cout<<endl;
    }
}
